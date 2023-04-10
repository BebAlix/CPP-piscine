/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:28:03 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/13 15:15:31 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    {
        FragTrap    one("Ratchet");
    
        one.attack("Monster");
        one.takeDamage(5);
        one.beRepaired(1);
        one.takeDamage(7);
        one.attack("robot");
        one.beRepaired(1);
        one.highFivesGuys();
    }

    std::cout << std::endl;

    {
        FragTrap    one;

        one.beRepaired(1);
        for (int i = 10; i != 0; i--)
            one.attack("Monster");
        one.beRepaired(1);
        one.highFivesGuys();
    }

    return (0);
}
