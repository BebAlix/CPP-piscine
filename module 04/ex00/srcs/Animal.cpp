/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/06 18:30:13 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors

Animal::Animal(void): _type("Animal")							//Canonical Form
{
	std::cout << "Animal constructor called" << std::endl;
}								

Animal::Animal(Animal const & copy)			//Canonical Form
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

// Deconstructors

Animal::~Animal(void)								//Canonical Form
{
	std::cout << "Animal destructor called" << std::endl;
}

// Overloaded Operators

Animal & Animal::operator=(Animal const & rhs)	//Canonical Form
{
	_type = rhs._type;
	return (*this);
}

// Public Methods

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound !" << std::endl;
}

// Getter

std::string Animal::getType(void) const
{
    return (_type);
}

// Setter


