/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/09 18:42:16 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Constructors

AAnimal::AAnimal(void): _type("AAnimal")							//Canonical Form
{
	std::cout << "AAnimal constructor called" << std::endl;
}								

AAnimal::AAnimal(AAnimal const & copy)			//Canonical Form
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = copy;
}

// Deconstructors

AAnimal::~AAnimal(void)								//Canonical Form
{
	std::cout << "AAnimal destructor called" << std::endl;
}

// Overloaded Operators

AAnimal & AAnimal::operator=(AAnimal const & rhs)	//Canonical Form
{
	_type = rhs._type;
	return (*this);
}

// Public Methods

void 	AAnimal::showBrain(void) const
{
	
}
// Getter

std::string AAnimal::getType(void) const
{
    return (_type);
}

// Setter


