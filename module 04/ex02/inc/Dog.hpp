/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:13:05 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/09 18:42:00 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{

private:

	Brain *_brain;

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

		void 	showBrain(void) const;
	// Setter
		

};

#endif