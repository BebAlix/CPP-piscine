/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 21:54:08 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/06 21:20:03 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:

	std::string _name;
    Weapon &_weapon;

public:

	HumanA(std::string n, Weapon &w);
	~HumanA(void);

	void	attack(void) const;
};

# endif