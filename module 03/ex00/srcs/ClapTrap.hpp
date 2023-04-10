/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:28:20 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/05 14:10:30 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:

    std::string _name;
    int         _hit_points;
    int         _energy_points;
    int         _attack_damage;

public:

    ClapTrap(void);
    ClapTrap(ClapTrap const & src);
    ClapTrap & operator=(ClapTrap const & src);
    ~ClapTrap(void);

    ClapTrap(std::string name);

    void attack(const std::string & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

#endif