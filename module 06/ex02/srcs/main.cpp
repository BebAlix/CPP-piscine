/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:06:08 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/01 19:23:39 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <time.h>

int main(void)
{
    Base * basePtr;
    
    srand (time(NULL));
    
    basePtr = generate();
    identify(basePtr);
    delete (basePtr);

    basePtr = generate();
    Base & baseRef = *basePtr;
    identify(baseRef);
    delete (basePtr);

    return (0);
}