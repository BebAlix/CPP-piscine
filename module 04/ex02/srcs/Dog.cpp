/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/09 18:42:48 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors

Dog::Dog(void): AAnimal()								//Canonical Form
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}								

Dog::Dog(Dog const & copy): AAnimal(copy)			//Canonical Form
{
	std::cout << "Dog copy constructor called" << std::endl;
	_type = copy._type;
	_brain = new Brain(*(copy._brain));
}

// Deconstructors

Dog::~Dog(void)								//Canonical Form
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

// Overloaded Operators

Dog & Dog::operator=(Dog const & rhs)	//Canonical Form
{
	_type = rhs._type;
	*(_brain) = *(rhs._brain);
	return (*this);
}

// Public Methods

void	Dog::makeSound(void) const
{
	std::cout << "wouaf !" << std::endl;
}


// Getter



// Setter

void 	Dog::showBrain(void) const
{
	for(int i = 0; i < 5; i++)
		std::cout << this->_brain->getIdea(i) << std::endl;
}

