/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:38:15 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/13 18:53:46 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    this->_name = "Clank";
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
    std::cout << "Claptrap " << this->_name << " created with default constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & to_copy)
{
    std::cout << "Claptrap Copy constructor called" << std::endl;
	    *this = to_copy;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & to_copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->_name = to_copy._name;
    this->_hit_points = to_copy._hit_points;
    this->_energy_points = to_copy._energy_points;
    this->_attack_damage = to_copy._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Claptrap "  << this->_name << " destroyed" << std::endl;
}


ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
    std::cout << "Claptrap "  << this->_name << " created" << std::endl;
}


void ClapTrap::attack(const std::string & target)
{
    if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no hit points" << std::endl;
        return ;
    }
    if (this->_energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no energy points" << std::endl;
        return ;
    }
    this->_energy_points--;
    std::cout << "ClapTrap " << this->_name;
    std::cout << " attacks "  << target;
    std::cout << ", causing " << this->_attack_damage;
    std::cout << " points of damage!" << std::endl;
    std::cout << "Points of energy : " << this->_energy_points << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_hit_points -= amount;
    if (this->_hit_points < 0)
        this->_hit_points = 0;
    std::cout << this->_name; 
    std::cout << " take damage and losing " << amount;
    std::cout << " points of hit!" << std::endl;
    std::cout << "Points of hit : " << this->_hit_points << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no hit points" << std::endl;
        return ;
    }
    if (this->_energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no energy points" << std::endl;
        return ;
    }
    this->_hit_points += amount;
    this->_energy_points--;
    std::cout << this->_name; 
    std::cout << " be repaired and winning " << amount;
    std::cout << " points of hit!" << std::endl;
    std::cout << "Points of hit : " << this->_hit_points << std::endl;
    std::cout << "Points of energy : " << this->_energy_points << std::endl;
}
