/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:28:23 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/06 17:27:50 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{

private:

public:

    ScavTrap(void);
    ScavTrap(const ScavTrap & to_copy);
    ScavTrap & operator=(const ScavTrap & to_copy);
    ~ScavTrap(void);

    ScavTrap(std::string name);

    void attack(const std::string & target);
    void guardGate(void);

};

#endif