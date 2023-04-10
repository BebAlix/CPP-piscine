/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 23:56:54 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/04 15:22:24 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:

	std::string _type;

public:

	Weapon(std::string type);
	~Weapon(void);

	void		setType(std::string type);
	std::string const & getType(void) const;

};

# endif