/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 21:59:08 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/05 13:37:44 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w): _name(n), _weapon(w)
{
    std::cout << this->_name << " was born with " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
     std::cout << this->_name << " is dead" << std::endl;
}

void	HumanA::attack(void) const
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
