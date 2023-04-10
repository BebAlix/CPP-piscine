/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/06 18:30:17 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors

Cat::Cat(void): Animal()								//Canonical Form
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
}								

Cat::Cat(Cat const & copy): Animal(copy)			//Canonical Form
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

// Deconstructors

Cat::~Cat(void)								//Canonical Form
{
	std::cout << "Cat destructor called" << std::endl;
}

// Overloaded Operators

Cat & Cat::operator=(Cat const & rhs)	//Canonical Form
{
	_type = rhs._type;
	return (*this);
}

// Public Methods

void	Cat::makeSound(void) const
{
	std::cout << "Miaou !" << std::endl;
}


// Getter


// Setter


