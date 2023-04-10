/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/06 18:30:44 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors

WrongCat::WrongCat(void): WrongAnimal()								//Canonical Form
{
	WrongAnimal::_type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}								

WrongCat::WrongCat(WrongCat const & copy): WrongAnimal(copy)			//Canonical Form
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}

// Deconstructors

WrongCat::~WrongCat(void)								//Canonical Form
{
	std::cout << "WrongCat destructor called" << std::endl;
}

// Overloaded Operators

WrongCat & WrongCat::operator=(WrongCat const & rhs)	//Canonical Form
{
	_type = rhs._type;
	return (*this);
}

// Public Methods

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong miaou !" << std::endl;
}

// Getter



// Setter


