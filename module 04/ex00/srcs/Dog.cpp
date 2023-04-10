/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/06 18:30:22 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors

Dog::Dog(void): Animal()								//Canonical Form
{
	_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}								

Dog::Dog(Dog const & copy): Animal(copy)			//Canonical Form
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

// Deconstructors

Dog::~Dog(void)								//Canonical Form
{
	std::cout << "Dog destructor called" << std::endl;
}

// Overloaded Operators

Dog & Dog::operator=(Dog const & rhs)	//Canonical Form
{
	_type = rhs._type;
	return (*this);
}

// Public Methods

void	Dog::makeSound(void) const
{
	std::cout << "wouaf !" << std::endl;
}


// Getter



// Setter


