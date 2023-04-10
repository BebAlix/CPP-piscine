/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:13:05 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/24 17:57:27 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{

private:
		AMateria * _materia[4];

public:

	// Constructors
		MateriaSource(void);								//Canonical Form
		MateriaSource(MateriaSource const & copy);				//Canonical Form
		
	// Deconstructors
		~MateriaSource(void);								//Canonical Form

	// Overloaded Operators
		MateriaSource & operator=(MateriaSource const & rhs);	//Canonical Form

	// Public Methods
		void 		learnMateria(AMateria * rhs);
		AMateria *	createMateria(std::string const & type);

	// Getter


	// Setter
		

};

#endif