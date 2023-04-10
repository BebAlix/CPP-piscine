/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:13:05 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/06 18:11:29 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{

private:

protected:

	std::string _type;

public:

	// Constructors
		WrongAnimal(void);								//Canonical Form
		WrongAnimal(WrongAnimal const & copy);				//Canonical Form

	// Deconstructors
		virtual ~WrongAnimal(void);								//Canonical Form

	// Overloaded Operators
		WrongAnimal & operator=(WrongAnimal const & rhs);	//Canonical Form

	// Public Methods
		void	makeSound(void) const;

	// Getter

		std::string getType(void) const;

	// Setter
		

};

#endif