/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:39:04 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/03 18:08:17 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ~~~~~~~~~~~~~~~~Convert~~~~~~~~~~~~~~~~~~

char stringToChar(std::string str)
{
    const char *c;

    c = str.c_str();
    return (c[0]);
}

int stringToInt(std::string str)
{
    return (atoi(str.c_str()));
}

float   stringToFloat(std::string str)
{
    return (strtof(str.c_str(), NULL));
}

double  stringToDouble(std::string str)
{
    return (strtod(str.c_str(), NULL));
}

// ~~~~~~~~~~~~~~~~Print with cast~~~~~~~~~~~~~~~~~~

static void    printChar(char c)
{
    if (c == '.')
        std::cout.precision(1);
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

static void    printInt(int nb)
{
    std::cout.precision(1);
    if (nb >= 32 && nb < 127)
        std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
    else if ((nb >= 0 && nb <= 31) || (nb >= 127 && nb < 128))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << nb << std::endl;
    std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

static void    printFloat(float nb)
{
    if (nb >= 32 && nb < 127)
        std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
    else if ((nb >= 0 && nb <= 31) || (nb >= 127 && nb < 128))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
    
     if (nb > -2147483648  && nb < 2147483647)
        std::cout << "int: " << static_cast<int>(nb) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

static void    printDouble(double nb)
{
    if (nb >= 32 && nb < 127)
        std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
    else if ((nb >= 0 && nb <= 31) || (nb >= 127 && nb < 128))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;

    if (nb > -2147483648  && nb < 2147483647)
        std::cout << "int: " << static_cast<int>(nb) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

static void    printFloatLiteral(float nb)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << nb << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

static void    printDoubleLiteral(double nb)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
    std::cout << "double: " << nb << std::endl;
}

// ~~~~~~~~~~~~~~~~check~~~~~~~~~~~~~~~~~~

static bool    isChar(std::string str)
{
    if (isdigit(str[0]))
        return (false);
    if (str[1] != '\0' )
        return (false);
    return (true);
}

static bool	check_size(std::string input)
{
	std::string base;
	int		    i;

	base = "2147483647";
	i = 0;
    if (input == "-2147483648")
        return (true);
    if (input[0] == '-' || input[0] == '+')
        input.erase(0,1);
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
    

    if (str[0] != '+' && str[0] != '-' && !isdigit(str[0]))
        return (false);
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

    if (str[0] != '+' && str[0] != '-' && !isdigit(str[0]))
        return (false);
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
    if (str[str.size() - 1] != 'f')
        return (false);
    else
        str.erase(str.size() - 1, 1);
    if (!OnePoint(str))
        return (false);
    if (!checkDigit(str))
        return (false);
    return (true);
}

static bool    isDouble(std::string str)
{
    char * end;

    strtod(str.c_str(), &end);
    if (errno == ERANGE)
        return (false);
    if (!OnePoint(str))
        return (false);
    if (!checkDigit(str))
        return (false);

    return (true);
}

static bool    isFloatLiteral(std::string str)
{
    if (str == "-inff" || str == "+inff" || str == "nanf" || str == "inff")
        return (true);
    return (false);
}

static bool    isDoubleLiteral(std::string str)
{
    if (str == "-inf" || str == "+inf" || str == "nan" || str == "inf")
        return (true);
    return (false);
}


// ~~~~~~~~~~~~~~~~principal function~~~~~~~~~~~~~~~~~~

bool    ScalarConverter::convert(std::string str)
{   
    
    std::cout.setf(std::ios::fixed);
    int idx = str.find('.') + 1;
    int size = str.size() - idx;
    std::cout.precision(size);
    
    if (isChar(str))
        printChar(stringToChar(str));
    else if (isInt(str))
        printInt(stringToInt(str));
    else if (isFloat(str))
    {
        std::cout.precision(size - 1);
        printFloat(stringToFloat(str));
    }
    else if (isDouble(str))
        printDouble(stringToDouble(str));
    else if (isFloatLiteral(str))
        printFloatLiteral(stringToFloat(str));
    else if(isDoubleLiteral(str))
        printDoubleLiteral(stringToDouble(str));
    else
    {
        std::cout << "Bad argument !" << std::endl;
        return (false);
    }
    return (true);
}





