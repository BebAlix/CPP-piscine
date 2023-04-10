/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:13:05 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/09 18:41:10 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

 #include "Brain.hpp"
class AAnimal
{

private:

protected:

	std::string _type;

public:

	// Constructors
		AAnimal(void);								//Canonical Form
		AAnimal(AAnimal const & copy);				//Canonical Form

	// Deconstructors
		virtual ~AAnimal(void);								//Canonical Form

	// Overloaded Operators
		AAnimal & operator=(AAnimal const & rhs);	//Canonical Form

	// Public Methods
		virtual void	makeSound(void) const = 0;
		virtual void 	showBrain(void) const;
	// Getter

		std::string getType(void) const;

	// Setter
		

};

#endif