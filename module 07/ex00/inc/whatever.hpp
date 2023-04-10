/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:30:24 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/04 11:43:36 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void    swap(T & a, T & b)
{
    T tmp;

    tmp = a;
    a = b;
    b = tmp; 
}

template<typename T>
T   min(T const & a, T const & b) {
    return (a < b ? a : b);
}

template<typename T>
T   max(T const & a, T const & b) {
    return (a > b ? a : b);
}

#endif