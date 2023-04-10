/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/09 18:42:37 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors

Cat::Cat(void): AAnimal()								//Canonical Form
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}								

Cat::Cat(Cat const & copy): AAnimal(copy)			//Canonical Form
{
	std::cout << "Cat copy constructor called" << std::endl;
	_type = copy._type;
	_brain = new Brain(*(copy._brain));
}

// Deconstructors

Cat::~Cat(void)								//Canonical Form
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

// Overloaded Operators

Cat & Cat::operator=(Cat const & rhs)	//Canonical Form
{
	_type = rhs._type;
	*(_brain) = *(rhs._brain);
	return (*this);
}

// Public Methods

void	Cat::makeSound(void) const
{
	std::cout << "Miaou !" << std::endl;
}


// Getter
void 	Cat::showBrain(void) const
{
	for(int i = 0; i < 5; i++)
		std::cout << this->_brain->getIdea(i) << std::endl;
}

// Setter


