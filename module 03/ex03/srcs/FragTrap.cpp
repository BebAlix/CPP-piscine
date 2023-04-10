/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:28:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/05 17:26:31 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "FragTrap " << this->_name << " created with default constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap & to_copy): ClapTrap(to_copy)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
	    *this = to_copy;
}

FragTrap & FragTrap::operator=(const FragTrap & to_copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->_name = to_copy._name;
    this->_hit_points = to_copy._hit_points;
    this->_energy_points = to_copy._energy_points;
    this->_attack_damage = to_copy._attack_damage;
	return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->_name << " destroyed" << std::endl;
}


FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "FragTrap " << this->_name << " created" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->_hit_points <= 0)
    {
        std::cout << "FragTrap " << this->_name << " has no hit points" << std::endl;
        return ;
    }
    if (this->_energy_points <= 0)
    {
        std::cout << "FragTrap " << this->_name << " has no energy points" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->_name; 
    std::cout << " ask for highFives" << std::endl;
    this->_energy_points -= 1;
}
