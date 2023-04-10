/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:13:05 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/09 17:37:49 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{

private:

	std::string	_ideas[100];

public:

	// Constructors
		Brain(void);								//Canonical Form
		Brain(Brain const & copy);				//Canonical Form

	// Deconstructors
		~Brain(void);								//Canonical Form

	// Overloaded Operators
		Brain & operator=(Brain const & rhs);	//Canonical Form

	// Public Methods
		

	// Getter
		std::string const & getIdea(int i) const;

	// Setter
		

};

#endif