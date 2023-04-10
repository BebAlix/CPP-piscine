/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:11:24 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/06 20:54:15 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _Index(0), _NbContact(0)
{
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::AddContact(void)
{
	if (this->_Index == 8)
		this->_Index = 0;
	this->_Contacts[this->_Index].InitContact();
	this->_Index++;
	if (this->_NbContact < 8)
		this->_NbContact++;
	return ;
}

void	PhoneBook::SearchContact(void) const
{
	std::string	input;
	int			nb;

	if (!this->_NbContact)
	{
		std::cout << "No contact registered" << std::endl;
		return ;
	}
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for(int i = 0; i < this->_NbContact; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		this->_Contacts[i].ShowContact();
	}
	int i = 0;
	while (true)
	{
		std::cout << "\ninput index : ";
		std::getline(std::cin, input);
		if (std::cin.eof()) 
			return ;
		while(input[i])
		{
			if(!isdigit(input[i]))
			{
				std::cout << "Is not a digit" << std::endl;
				std::cout << "\ninput index : ";
				std::getline(std::cin, input);
				if (std::cin.eof()) 
					return ;
				i = -1;
			}
			i++;
		}
		nb = atoi(input.c_str());
		if (nb < 0 || nb > this->_NbContact - 1)
		{
			std::cout << "Wrong index" << std::endl;
		}
		else
		{
			this->_Contacts[nb].ShowAllInfosContact();
			break;
		}
	}
	return ;
}
