/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:31:29 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/15 19:04:15 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
void easyfind(T & container, int i)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), i);
    if (it != container.end())
        std::cout << "Element found in container: " << *it << '\n';
    else
        std::cout << "Element not found in container\n";
}

#endif