/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:21:42 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/01 18:33:36 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Serializer_HPP
#define Serializer_HPP

#include <iostream>
#include <stdint.h>
#include "Data.h"

class Serializer
{
private:
//Constructor and Destructor
    Serializer(void); //Canonical
    Serializer(Serializer const & copy); //Canonical
    ~Serializer(); //Canonical

// Overloaded Operators
    Serializer & operator=(Serializer const & rhs); //Canonical
protected:
public:

    
//Getter
//Functions
    static uintptr_t   serialize(Data* ptr);
    static Data *      deserialize(uintptr_t raw);
};

#endif