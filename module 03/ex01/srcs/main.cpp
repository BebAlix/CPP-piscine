/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:28:03 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/13 15:12:23 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    {
        ScavTrap    one("Ratchet");
    
        one.attack("Monster");
        one.takeDamage(5);
        one.beRepaired(1);
        one.takeDamage(7);
        one.attack("robot");
        one.beRepaired(1);
        one.guardGate();
    }

    std::cout << std::endl;

    {
        ScavTrap    one;

        one.beRepaired(1);
        for (int i = 10; i != 0; i--)
            one.attack("Monster");
        one.beRepaired(1);
        one.guardGate();
    }

    return (0);
}
