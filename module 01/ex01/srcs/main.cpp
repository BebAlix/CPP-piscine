/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 23:56:37 by equesnel          #+#    #+#             */
/*   Updated: 2022/12/22 18:08:43 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*Horde;
	int		N = 5;

	Horde = zombieHorde(N, "Roger");
	for(int i = 0; i < N;i++)
		Horde[i].announce();

	delete[] Horde;
    return (0);
}