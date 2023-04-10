/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:13:05 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/09 17:36:38 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{

private:

	Brain *_brain;

public:

	// Constructors
		Cat(void);								//Canonical Form
		Cat(Cat const & copy);				//Canonical Form

	// Deconstructors
		~Cat(void);								//Canonical Form

	// Overloaded Operators
		Cat & operator=(Cat const & rhs);	//Canonical Form

	// Public Methods
		void	makeSound(void) const;
		void 	showBrain(void) const;

	// Getter

	// Setter
		

};

#endif