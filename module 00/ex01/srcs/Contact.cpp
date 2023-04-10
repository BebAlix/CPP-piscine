/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:11:14 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/23 15:14:41 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->_InitNameInfos();
}

Contact::~Contact(void)
{
}

void    Contact::_InitNameInfos(void)
{
	this->_NameInfos[0] = "First Name : ";
	this->_NameInfos[1] = "Last Name : ";
	this->_NameInfos[2] = "Nickname : ";
	this->_NameInfos[3] = "Phone Number : ";
	this->_NameInfos[4] = "Darkest Secret : ";
}

void	Contact::InitContact(void)
{
	std::string input;

	for (int i = 0; i != 5; i++)
	{
		std::cout << this->_NameInfos[i];
		std::getline(std::cin, input);
		if (std::cin.eof()) 
			return ;
		this->_Infos[i] = input;
		if (input.empty())
			i--;
	}
	std::cout << "The contact has been added" << std::endl;
}

void	Contact::ShowContact(void) const
{
	for (int i = 0; i < 3; i++)
	{
		if (this->_Infos[i].size() <= 10)
			std::cout << "|" << std::setw(10) << this->_Infos[i];
		else
			std::cout << "|" << this->_Infos[i].substr(0,9) << ".";
	}
	std::cout << "|" << std::endl;
}

void	Contact::ShowAllInfosContact(void) const
{
	for (int i = 0; i < 5; i++)
		std::cout << this->_NameInfos[i] << this->_Infos[i] << std::endl;
}