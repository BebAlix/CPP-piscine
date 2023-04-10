/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:28:23 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/13 14:59:36 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{

private:

    std::string _name;

public:

    DiamondTrap(void);
    DiamondTrap(const DiamondTrap & to_copy);
    DiamondTrap & operator=(const DiamondTrap & to_copy);
    ~DiamondTrap(void);

    DiamondTrap(std::string name);

    void attack(const std::string & target);
    void whoAmI(void);

};

#endif