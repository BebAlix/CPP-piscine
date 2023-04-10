/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:50:06 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/09 15:27:26 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static int	write_outfile(std::string filename, std::string s1, std::string s2, std::string content)
{
	std::string 	final_str;
	std::ofstream	outfile(filename.append(".replace").c_str());
	
	if (outfile)
	{
		int pos;
		int	len_s1;

		len_s1 = s1.size();
		while(true)
		{
			pos = content.find(s1);
			if (pos == -1)
			{
				final_str.append(content);
				break;
			}
			final_str.append(content.substr(0, pos));
			content.erase(0, pos + len_s1);
			final_str.append(s2);
		}
	}
	else
	{
		std::cout << "ERROR: File.replace can't be created" << std::endl;
		return (1);
	}
	outfile << final_str;
	return (0);
}

int main(int argc, char **argv)
{
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::string		content;

	if(argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	std::ifstream	infile(filename.c_str());
	std::string		line;

	if(infile)
	{
		while(getline(infile, line))
			content.append(line + "\n");
	}
	else
	{
		std::cout << "ERROR: File can't be open" << std::endl;
		return (1);
	}
	if (write_outfile(filename, s1, s2, content))
		return (1);
	return (0);
}