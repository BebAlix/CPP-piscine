/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:13:05 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/24 17:56:33 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTERE_HPP
# define CHARACTERE_HPP

# include <iostream>

# include "AMateria.hpp"

class Character: public ICharacter
{

private:

	AMateria 	*_inventory[4];
	AMateria	*_floor[42];
	std::string _name;

public:

	// Constructors
		Character(void);								//Canonical Form
		Character(std::string name);
		Character(Character const & copy);				//Canonical Form

	// Deconstructors
		~Character(void);								//Canonical Form

	// Overloaded Operators
		Character & operator=(Character const & rhs);	//Canonical Form

	// Public Methods
		void 				equip(AMateria * m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter & target);

	// Getter
		std::string const & getName() const;


	// Setter
		

};

#endif