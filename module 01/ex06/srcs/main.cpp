/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:50:06 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/10 14:49:06 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	info_to_lvl(char *info)
{
	std::string	name_level[4];

	name_level[DEBUG] = "DEBUG";
	name_level[INFO] = "INFO";
	name_level[WARNING] = "WARNING";
	name_level[ERROR] = "ERROR";

	for (int i = 0; i < 4; i++)
	{
		if (info == name_level[i])
		{
			return (i);
		}
	}
	return (-1);
}

int main(int argc, char **argv)
{
	Harl	msg;

	if (argc != 2)
	{
		std::cout << "Wrong number of argument" << std::endl;
		return (0);
	}
	switch (info_to_lvl(argv[1]))
	{
		case DEBUG:
			msg.complain("DEBUG");
			__attribute__ ((fallthrough));
		case INFO:
			msg.complain("INFO");
			__attribute__ ((fallthrough));
		case WARNING:
			msg.complain("WARNING");
			__attribute__ ((fallthrough));
		case ERROR:
			msg.complain("ERROR");
			break;
		default:
			std::cout << "this level does not exist" << std::endl;
	}
	return (0);
}