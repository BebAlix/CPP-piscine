/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:34:09 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/06 14:01:07 by equesnel         ###   ########.fr       */
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
	void    (Harl::*ptr_f[4])(void);// = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	nb;

	ptr_f[0] = &Harl::debug;
	ptr_f[1] = &Harl::info;
	ptr_f[2] = &Harl::warning;
	ptr_f[3] = &Harl::error;

	if (level != "0" && level != "1" && level != "2" && level != "3")
	{
		std::cout << "this level does not exist" << std::endl;
		return ;
	}
	else
	{
		nb = atoi(level.c_str());
		(this->*ptr_f[nb])();
	}
}
