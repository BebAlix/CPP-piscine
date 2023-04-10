/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 21:54:03 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/04 20:48:55 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:

	std::string _name;
    Weapon *_weapon;

public:

	HumanB(std::string n);
	~HumanB(void);

	void	attack(void) const;
    void    setWeapon(Weapon &w);

};

# endif