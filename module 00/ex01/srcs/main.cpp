/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:11:30 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/27 11:38:50 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook directory;
	std::string input;

	std::cout << "Enter a command (ADD, SEARCH, EXIT)" << std::endl;
	while (std::getline(std::cin, input))
	{
		if (input == "ADD")
			directory.AddContact();
		if (!input.compare("SEARCH"))
			directory.SearchContact();
		if (!input.compare("EXIT"))
			break;
	}
	std::cout << "\nBye Bye..." <<std::endl;
	return (0);
}
