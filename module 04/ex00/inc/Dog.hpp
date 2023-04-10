/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:13:05 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/06 18:29:52 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog: public Animal
{

private:


public:

	// Constructors
		Dog(void);								//Canonical Form
		Dog(Dog const & copy);				//Canonical Form

	// Deconstructors
		~Dog(void);								//Canonical Form

	// Overloaded Operators
		Dog & operator=(Dog const & rhs);	//Canonical Form

	// Public Methods
		void	makeSound(void) const;

	// Getter


	// Setter
		

};

#endif