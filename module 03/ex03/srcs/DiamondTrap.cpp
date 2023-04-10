/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:28:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/13 14:55:04 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
    this->_name = "Clank";
    this->ClapTrap::_name =  "Clank_clapTrap";
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
    std::cout << "DiamondTrap " << this->_name << " created with default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & to_copy): ClapTrap(to_copy), ScavTrap(to_copy), FragTrap(to_copy)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
	    *this = to_copy;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & to_copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->_name = to_copy._name;
    this->ClapTrap::_name = _name + "_clapTrap";
    this->_hit_points = to_copy._hit_points;
    this->_energy_points = to_copy._energy_points;
    this->_attack_damage = to_copy._attack_damage;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << this->_name << " destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->_name = name;
    this->ClapTrap::_name = _name + "_clapTrap";
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
    std::cout << "DiamondTrap " << this->_name << " created" << std::endl;
}


void DiamondTrap::attack(const std::string & target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name = " << this->_name << std::endl;
    std::cout << "Claptrap name = " <<  this->ClapTrap::_name << std::endl;
}
