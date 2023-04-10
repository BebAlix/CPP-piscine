/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:30:24 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/14 18:27:23 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void    iter(T * array, size_t len, void (*f)(T const &)) {
    for (size_t i = 0; i < len; i++)
        f(array[i]);
}

template<typename T>
void displayResult(T val) {
    std::cout << val << " ";
}

#endif