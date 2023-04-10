/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:06:08 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/15 12:45:22 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {
    int array[] = {1, 2, 3, 4, 5, 6};
    std::string str[] = {"salut", "la", "mif"};
    
    std::cout << "~~~~~~~~~int~~~~~~~~~~" << std::endl;
    iter(array, 6, displayResult);
    std::cout << std::endl;
    std::cout << "~~~~~~~~string~~~~~~~~" << std::endl;
    iter(str, 3, displayResult);
    std::cout << std::endl;
}