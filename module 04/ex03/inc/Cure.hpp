/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:13:05 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/24 18:09:44 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria
{

private:
	

public:

	// Constructors
		Cure(void);								//Canonical Form
		Cure(Cure const & copy);				//Canonical Form

	// Deconstructors
		~Cure(void);								//Canonical Form

	// Overloaded Operators
		Cure & operator=(Cure const & rhs);	//Canonical Form

	// Public Methods
		void use(ICharacter & target);
		Cure * clone() const;

	// Getter


	// Setter
		

};

#endif