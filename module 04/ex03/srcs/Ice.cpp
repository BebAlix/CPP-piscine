/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/24 18:17:25 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Constructors

Ice::Ice(void): AMateria("ice")								//Canonical Form
{
	//std::cout << "Ice constructor called" << std::endl;
}								

Ice::Ice(Ice const & copy): AMateria(copy)			//Canonical Form
{
	//std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}

// Deconstructors

Ice::~Ice(void)								//Canonical Form
{
	//std::cout << "Ice destructor called" << std::endl;
}

// Overloaded Operators

Ice & Ice::operator=(Ice const & rhs)	//Canonical Form
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

// Public Methods

void Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " <<  target.getName() << " *" << std::endl;
}

Ice * Ice::clone() const
{
	Ice *clone;

	clone = new Ice();
	return (clone);
}



// Getter



// Setter


