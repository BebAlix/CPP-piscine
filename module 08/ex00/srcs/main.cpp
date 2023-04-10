/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:06:08 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/21 14:06:43 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main() 
{
    {  
        std::list<int> lst;

        for (int i = 0; i < 5; i++)
            lst.push_back(i);

        easyfind(lst, 4);
        easyfind(lst, 6);
    }
    {
        std::vector<int> vec;

        for (int i = 0; i < 5; i++)
            vec.push_back(i);

        easyfind(vec, 4);
        easyfind(vec, 6);
    }
    return 0;
}
