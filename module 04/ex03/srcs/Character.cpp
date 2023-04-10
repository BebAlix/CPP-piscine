/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/24 19:17:16 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructors

Character::Character(void)								//Canonical Form
{
	//std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4 ; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 42 ; i++)
		_floor[i] = NULL;
}								

Character::Character(std::string name)
{
	for (int i = 0; i < 4 ; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 42 ; i++)
		_floor[i] = NULL;
	_name = name;
}

Character::Character(Character const & copy)			//Canonical Form
{
	//std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4 ; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 42 ; i++)
		_floor[i] = NULL;
	*this = copy;
}

// Deconstructors

Character::~Character(void)								//Canonical Form
{
	//std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4 ; i++)
		delete _inventory[i];
	for (int i = 0; i < 42 ; i++)
		delete _floor[i];
}

// Overloaded Operators

Character & Character::operator=(Character const & rhs)	//Canonical Form
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4 ; i++)
			_inventory[i] = rhs._inventory[i]->clone();
		_name = rhs._name;
	}
	return (*this);
}

// Public Methods

void Character::equip(AMateria * m)
{
	for (int i = 0; i < 4 ;i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	int i;
	i = 0;
	if (idx < 0 || idx > 3)
		return ;
	if (_inventory[idx] != NULL)
	{
		while (_floor[i] != NULL)
		{
			i++;
			if (i > 42)
				return ;
		}
		_floor[i] = _inventory[idx];
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (_inventory[idx] != NULL)
		_inventory[idx]->use(target);
}

// Getter
std::string const & Character::getName() const
{
	return (_name);
}



// Setter


