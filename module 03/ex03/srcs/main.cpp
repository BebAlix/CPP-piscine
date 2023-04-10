/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:28:03 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/06 19:09:52 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap   one("Ratchet");
    
    one.attack("Monster");
    one.takeDamage(5);
    one.beRepaired(1);
    one.highFivesGuys();
    one.guardGate();
    one.whoAmI();
    return (0);
}
