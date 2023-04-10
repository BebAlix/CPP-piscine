/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:13:05 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/24 16:48:59 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

# include "ICharacter.hpp"

class AMateria
{

protected:

	std::string _type;

public:

	// Constructors and Deconstructors
		AMateria(void);								//Canonical Form
		AMateria(std::string const & type);
		AMateria(AMateria const & copy);				//Canonical Form
		virtual ~AMateria(void);								//Canonical Form

	// Overloaded Operators
		AMateria & operator=(AMateria const & rhs);	//Canonical Form

	// Public Methods
		virtual void use(ICharacter & target);
		virtual AMateria * clone() const = 0;
		

	// Getter
		std::string const & getType() const; //Returns the materia type

	// Setter


};

#endif