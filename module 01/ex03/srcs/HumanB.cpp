/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:00:38 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/05 13:43:22 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n): _name(n), _weapon(NULL)
{
    std::cout << this->_name << " was born with no weapon" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << this->_name << " is dead" << std::endl;
}

void	HumanB::attack(void) const
{
    if (this->_weapon == NULL)
         std::cout << this->_name << " attacks with their fists " << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &w)
{
    this->_weapon = &w;
}
