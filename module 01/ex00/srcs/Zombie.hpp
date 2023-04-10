/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 23:56:54 by equesnel          #+#    #+#             */
/*   Updated: 2022/12/22 16:21:18 by equesnel         ###   ########.fr       */
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

	Zombie(std::string);
	~Zombie(void);

	void	announce( void );
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

# endif