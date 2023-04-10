/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/24 16:52:08 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Constructors

Cure::Cure(void): AMateria("cure")								//Canonical Form
{
	//std::cout << "Cure constructor called" << std::endl;
}								

Cure::Cure(Cure const & copy): AMateria(copy)			//Canonical Form
{
	//std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
}

// Deconstructors

Cure::~Cure(void)								//Canonical Form
{
	//std::cout << "Cure destructor called" << std::endl;
}

// Overloaded Operators

Cure & Cure::operator=(Cure const & rhs)	//Canonical Form
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

// Public Methods

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " <<  target.getName() << "'s wounds *" << std::endl;
}

Cure * Cure::clone() const
{
	Cure *clone;

	clone = new Cure();
	return (clone);
}



// Getter



// Setter


