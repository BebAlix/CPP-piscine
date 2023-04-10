/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:28:20 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/13 14:59:32 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

private:


protected:

    std::string _name;
    int         _hit_points;
    int         _energy_points;
    int         _attack_damage;

public:

    ClapTrap(void);
    ClapTrap(const ClapTrap & to_copy);
    ClapTrap & operator=(const ClapTrap & to_copy);
    ~ClapTrap(void);

    ClapTrap(std::string name);

    void attack(const std::string & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

#endif