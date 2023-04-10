/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 23:58:02 by equesnel          #+#    #+#             */
/*   Updated: 2022/12/22 18:08:14 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name )
{
    Zombie *Dead;

    if (N < 1)
    {
        return (NULL);
    }
    Dead = new Zombie[N];
    for(int i = 0; i < N; i++)
        Dead[i].setname(name);
    return (Dead);
}