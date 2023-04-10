/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:54:53 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/28 18:07:11 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

static bool is_empty(std::ifstream& file)
{
    return (file.peek() == EOF);
}

static bool	check_size(std::string input)
{
	std::string base;
	int		    i;

	base = "2147483647";
	i = 0;
    if (input.size() > base.size())
		return (false);
	if (input.size() < base.size())
		return (true);
	while (input[i])
	{
		if (input[i] == base[i])
			i++;
		else if (input[i] > base[i])
			return (false);
		else
			return (true);
	}
	return (true);
}

static bool isInt(std::string str)
{
    int i;
    
    i = 1;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return (false);
        i++;
    }

    if (!check_size(str))
        return (false);
    return (true);
}

static bool OnePoint(std::string str)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        if (str[i] == '.' && str[i + 1] != '\0')
            count++;
        i++;
    }
    if(count != 1)
        return (false);
    return (true);
}

static bool checkDigit(std::string str)
{
    int i;

    i = 1;
    while (str[i])
    {
        if (!isdigit(str[i]) && str[i] != '.')
            return (false);
        i++;
    }
    return (true);
}

static bool    isFloat(std::string str)
{
    char * end;

    strtof(str.c_str(), &end);
    if (errno == ERANGE)
        return (false);
    if (!OnePoint(str))
        return (false);
    if (!checkDigit(str))
        return (false);
    return (true);
}

static bool isValidDate(int d, int m, int y)
{
    // Check year / month / day 
    if (y < 0 || y > 9999)
        return false;
    if (m < 1 || m > 12)
        return false;
    if (d < 1 || d > 31)
        return false;
  
    // Check February
    if (m == 2)
    {
        if (((y % 4 == 0) && (y % 100 != 0)) || y % 400 == 0)
            return (d <= 29);
            
        else
            return (d <= 28);
    }

    // Check month with 30 days
    if ((m == 4 || m == 6 || m == 9 || m == 11))
        return (d <= 30);
    return true;
}

static bool    check_date(std::string str)
{
    std::string y = "";
    std::string m = "";
    std::string d = "";
    int i = 0;

    for (int j = 0; j < 4; j++)
    {
        if (!isdigit(str[i]))
            return false;
        y += str[i];
        i++;
    }
    if (str[i] != '-')
        return false;
    i++;
    for (int j = 0; j < 2; j++)
    {
        if (!isdigit(str[i]))
            return false;
        m += str[i];
        i++;
    }
    if (str[i] != '-')
        return false;
    i++;
    for (int j = 0; j < 2; j++)
    {
        if (!isdigit(str[i]))
            return false;
        d += str[i];
        i++;
    }
    if (!isValidDate(atoi(d.c_str()), atoi(m.c_str()), atoi(y.c_str())))
        return false;
    return true;
}

bool    BitcoinExchange::parseData(std::string str)
{
    std::string value = "";
    int i;

    if (str == "date,exchange_rate")
            return true;
    if (str.size() < 10 || !check_date(str.substr(0, 10)))
        return false;
    i = 10;
    if (str[i] != ',')
        return false;
    i++;
    while(str[i] != 0)
    {
        value += str[i];
        i++;
    }
    int valid = 0;

    if (value[0] == '-')
        return false;
    if (isInt(value))
        valid = 1;
    if (isFloat(value))
        valid = 1;
    if (valid == 0)
        return false;

    std::string date = str.substr(0,10);
    _csvmap.insert(std::pair<std::string, float>(date, strtof(value.c_str(), NULL)));
    
    return true;
}

int    BitcoinExchange::parseInput(std::string str)
{
    std::string value = "";
    int i;
    if (str == "date | value")
            return 0;
    if (str.size() < 13 || !check_date(str.substr(0, 10)))
        return 1;
    i = 10;
    if (str[i] != ' ' || str[i+1] != '|' || str[i+2] != ' ')
        return 1;
    i += 3;
    while(str[i] != 0)
    {
        value += str[i];
        i++;
    }

    int valid = 0;
    if (value[0] == '-')
        return 3;
    if (isInt(value))
        valid = 1;
    if (isFloat(value))
        valid = 1;
    if (strtof(value.c_str(), NULL) > 1000)
        return 2;
    if (valid == 0)
        return 1;

    float val = strtod(value.c_str(), NULL);

    std::string date = str.substr(0,10);
    std::map<std::string, float>::iterator it;

    it =_csvmap.lower_bound(date);
    if (it == _csvmap.begin() && date < _csvmap.begin()->first)
        return 1;
    if (it == _csvmap.end())
        it = --_csvmap.end();
    if (date < it->first)
         it--;
    std::cout << std::fixed << std::setprecision(2),
    std::cout << date << " => " << value << " = " << val * it->second << std::endl;
    return 0;
}

bool BitcoinExchange::launch(int argc, char **argv)
{
    std::ifstream	fileInput(argv[1]);
    std::ifstream	fileData("data.csv");
	std::string		line;
    std::string		input;

    if(argc != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return true;
	}
    if(!fileData || !fileInput)
    {
		std::cout << "Error: could not open file." << std::endl;
		return true;
    }
    if (is_empty(fileData) || is_empty(fileInput))
    {
        std::cout << "Error: file is empty." << std::endl;
        return true;
    }
    while(getline(fileData, line))
    {
        if (!parseData(line))
        {
            std::cout << "Error: data is not valid" << std::endl;
            return true;
        }
    }
    while(getline(fileInput, line))
    {
        switch (parseInput(line))
        {
        case 0:            
            break;
        case 1:
            std::cout << "Error: bad input => " << line << std::endl;
            break;
        case 2:
            std::cout << "Error: too large a number." << std::endl;
            break;
        case 3:
            std::cout << "Error: not a positive number." << std::endl;
            break;
        }  
    }
    return false;
}
