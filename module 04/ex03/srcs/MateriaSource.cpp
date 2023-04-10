/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/24 18:05:25 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Constructors

MateriaSource::MateriaSource(void)								//Canonical Form
{
	//std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4 ; i++)
		_materia[i] = NULL;
}								

MateriaSource::MateriaSource(MateriaSource const & copy)			//Canonical Form
{
	//std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4 ; i++)
		_materia[i] = NULL;
	*this = copy;
}

// Deconstructors

MateriaSource::~MateriaSource(void)								//Canonical Form
{
	//std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4 ;i++)
		delete _materia[i];
}

// Overloaded Operators

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)	//Canonical Form
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4 ; i++)
			_materia[i] = rhs._materia[i];
	}
	return (*this);
}

// Public Methods

void 		MateriaSource::learnMateria(AMateria * m)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (_materia[i] == NULL)
		{
			_materia[i] = m;
			break;
		}
	}
}

AMateria *	MateriaSource::createMateria(std::string const & type)
{

	for (int i = 0; i < 4 ; i++)
	{
		if (_materia[i] != NULL && _materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	return (0);
}



// Getter



// Setter


