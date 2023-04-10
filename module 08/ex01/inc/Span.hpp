/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:44:48 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/16 12:26:54 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <list>
#include <algorithm>
#include <limits.h>
#include <stdlib.h>
#include <exception>

class Span
{
private:
    std::list<int>    _lst;
    unsigned int _n;

    Span(void); //Canonical
protected:
public:
//Constructor and Destructor
    Span(unsigned int N);
    Span(Span const & copy); //Canonical
    ~Span(); //Canonical

// Overloaded Operators
    Span & operator=(Span const & rhs); //Canonical

    
//Getter
//Functions
void            addNumber(int nb);
void            addNumber(std::list<int> l);
unsigned int    shortestSpan(void) const;
unsigned int    longestSpan(void) const;

};

#endif