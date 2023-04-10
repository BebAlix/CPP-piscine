/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/23 18:55:53 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors

Brain::Brain(void)								//Canonical Form
{
	//std::cout << _type << " constructor called" << std::endl;
	for(int i = 0; i<100; i++)
		_ideas[i] = "coucou la mif !";
}								

Brain::Brain(Brain const & copy)			//Canonical Form
{
	//std::cout << _type << " copy constructor called" << std::endl;
	*this = copy;
}

// Deconstructors

Brain::~Brain(void)								//Canonical Form
{
	//std::cout << _type << " destructor called" << std::endl;
}

// Overloaded Operators

Brain & Brain::operator=(Brain const & rhs)	//Canonical Form
{
	for (int i = 0; i < 100; i++)
        _ideas[i] = rhs._ideas[i];
	return (*this);
}

// Public Methods



// Getter

std::string const & Brain::getIdea(int i) const
{
	return (_ideas[i]);
}


// Setter


