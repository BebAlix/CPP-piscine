/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:24:28 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/01 17:07:20 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// Constructors and Destructors
Serializer::Serializer(void) //Canonical
{}

Serializer::Serializer(Serializer const & copy) //Canonical
{
    *this = copy;
}

Serializer::~Serializer() //Canonical
{}

// Overloaded Operators
Serializer & Serializer::operator=(Serializer const & rhs) //Canonical
{
    (void)rhs;
    return *this;
}

//Getter
//Functions
uintptr_t   Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *      Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}
