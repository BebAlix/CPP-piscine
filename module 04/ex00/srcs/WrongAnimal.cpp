/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/06 18:30:39 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors

WrongAnimal::WrongAnimal(void): _type("WrongAnimal")								//Canonical Form
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}								

WrongAnimal::WrongAnimal(WrongAnimal const & copy)		//Canonical Form
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
}

// Deconstructors

WrongAnimal::~WrongAnimal(void)								//Canonical Form
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

// Overloaded Operators

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)	//Canonical Form
{
	_type = rhs._type;
	return (*this);
}

// Public Methods

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound !" << std::endl;
}


// Getter

std::string WrongAnimal::getType(void) const
{
    return (_type);
}


// Setter


