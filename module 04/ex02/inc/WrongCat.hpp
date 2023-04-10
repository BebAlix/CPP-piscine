/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:13:05 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/06 18:29:31 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{

private:


public:

	// Constructors
		WrongCat(void);								//Canonical Form
		WrongCat(WrongCat const & copy);				//Canonical Form

	// Deconstructors
		~WrongCat(void);								//Canonical Form

	// Overloaded Operators
		WrongCat & operator=(WrongCat const & rhs);	//Canonical Form

	// Public Methods
		void	makeSound(void) const;

	// Getter


	// Setter
		

};

#endif