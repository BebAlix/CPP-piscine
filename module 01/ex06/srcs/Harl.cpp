/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:34:09 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/10 15:21:30 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void    Harl::debug( void )
{
	std::cout << "DEBUG called" << std::endl;
}

void    Harl::info( void )
{
	std::cout << "INFO called" << std::endl;
}

void    Harl::warning( void )
{
	std::cout << "WARNING called" << std::endl;
}

void    Harl::error( void )
{
	std::cout << "ERROR called" << std::endl;
}

void    Harl::complain( std::string level )
{
	void    (Harl::*ptr_f[4])(void);
	std::string	name_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	ptr_f[DEBUG] = &Harl::debug;
	ptr_f[INFO] = &Harl::info;
	ptr_f[WARNING] = &Harl::warning;
	ptr_f[ERROR] = &Harl::error;

	for (int i = 0; i < 4; i++)
	{
		if (level == name_level[i])
		{
			(this->*ptr_f[i])();
			return ;
		}
	}
}
