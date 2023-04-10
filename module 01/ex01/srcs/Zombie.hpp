/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 23:56:54 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/06 21:13:21 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:

	std::string _name;

public:

	Zombie(void);
	~Zombie(void);

	void	setname(std::string name);
	void	announce( void ) const;
};

Zombie* zombieHorde( int N, std::string name );

# endif