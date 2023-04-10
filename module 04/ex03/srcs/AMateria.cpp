/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/24 19:00:45 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructors

AMateria::AMateria(void)								//Canonical Form
{
	//std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type)
{

}

AMateria::AMateria(AMateria const & copy)			//Canonical Form
{
	//std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
}

// Deconstructors

AMateria::~AMateria(void)								//Canonical Form
{
	//std::cout << "AMateria destructor called" << std::endl;
}

// Overloaded Operators

AMateria & AMateria::operator=(AMateria const & rhs)	//Canonical Form
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

// Public Methods

void AMateria::use(ICharacter & target)
{
    std::cout << "* Use " << _type << "on " << target.getName() << " *" << std::endl;
}

// Getter

std::string const & AMateria::getType() const //Returns the materia type
{
    return (_type);
}


// Setter

