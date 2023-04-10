/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 23:56:37 by equesnel          #+#    #+#             */
/*   Updated: 2022/12/22 15:42:29 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{

	Zombie	*zb;
	zb = newZombie("Mario");
	zb->announce();
	randomChump("Luigi");
	delete zb;
    return (0);
}