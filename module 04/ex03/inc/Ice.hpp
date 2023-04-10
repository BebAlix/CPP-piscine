/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:13:05 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/24 17:57:02 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria
{

private:
	

public:

	// Constructors
		Ice(void);								//Canonical Form
		Ice(Ice const & copy);				//Canonical Form

	// Deconstructors
		~Ice(void);								//Canonical Form

	// Overloaded Operators
		Ice & operator=(Ice const & rhs);	//Canonical Form

	// Public Methods
		void use(ICharacter & target);
		Ice * clone() const;

	// Getter


	// Setter
		

};

#endif