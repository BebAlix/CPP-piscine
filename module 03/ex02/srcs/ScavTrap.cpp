/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:28:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/06 17:27:53 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "Scavtrap " << this->_name << " created with default constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & to_copy): ClapTrap(to_copy)
{
    std::cout << "Scavtrap Copy constructor called" << std::endl;
	    *this = to_copy;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & to_copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->_name = to_copy._name;
    this->_hit_points = to_copy._hit_points;
    this->_energy_points = to_copy._energy_points;
    this->_attack_damage = to_copy._attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Scavtrap " << this->_name << " destroyed" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "Scavtrap " << this->_name << " created" << std::endl;
}


void ScavTrap::attack(const std::string & target)
{
    if (this->_hit_points <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no hit points" << std::endl;
        return ;
    }
    if (this->_energy_points <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no energy points" << std::endl;
        return ;
    }
    this->_energy_points--;
    std::cout << "ScavTrap " << this->_name;
    std::cout << " attacks "  << target;
    std::cout << ", causing " << this->_attack_damage;
    std::cout << " points of damage!" << std::endl;
    std::cout << "Points of energy : " << this->_energy_points << std::endl;
}

void ScavTrap::guardGate(void)
{
    if (this->_hit_points <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no hit points" << std::endl;
        return ;
    }
    if (this->_energy_points <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no energy points" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name; 
    std::cout << " is in Gate keeper mode" << std::endl;
    this->_energy_points -= 1;
}
