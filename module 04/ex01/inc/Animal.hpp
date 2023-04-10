/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:13:05 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/15 12:58:35 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
#include "Brain.hpp"

class Animal
{

private:

protected:

	std::string _type;

public:

	// Constructors
		Animal(void);								//Canonical Form
		Animal(Animal const & copy);				//Canonical Form

	// Deconstructors
		virtual ~Animal(void);								//Canonical Form

	// Overloaded Operators
		Animal & operator=(Animal const & rhs);	//Canonical Form

	// Public Methods
		virtual void	makeSound(void) const;
		virtual void 	showBrain(void) const;
	// Getter

		std::string getType(void) const;

	// Setter
		

};

#endif