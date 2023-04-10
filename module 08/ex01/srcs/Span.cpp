/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:44:44 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/16 19:05:08 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructors and Destructors
Span::Span(void) //Canonical
{}

Span::Span(unsigned int N): _n(N) //Canonical
{}

Span::Span(Span const & copy) //Canonical
{
    *this = copy;
}

Span::~Span() //Canonical
{}

// Overloaded Operators
Span & Span::operator=(Span const & rhs) //Canonical
{
    if (this != &rhs)
    {
        _n = rhs._n;
        _lst = rhs._lst;
    }
    return *this;
}

//Getter
//Functions

void    Span::addNumber(int nb)
{
    if (_lst.size() >= _n)
        throw std::out_of_range("list already full");
    _lst.push_back(nb);
}

void    Span::addNumber(std::list<int> l)
{
    if ((_lst.size() + l.size() - 1) >= _n)
        throw std::out_of_range("Iterator range is to big");
    _lst.insert(_lst.end(), l.begin(), l.end());
}

unsigned int     Span::shortestSpan(void) const
{
    unsigned int tmp = UINT_MAX;
    std::list<int>::const_iterator it;
    std::list<int>::const_iterator next;
    std::list<int>    lst;

    lst = _lst;
    if (lst.size() < 2)
        return 0;
    lst.sort();
    it = lst.begin();
    next = ++lst.begin();
    while (it != lst.end())
    {
        if (tmp > abs(*next - *it))
            tmp = abs(*next - *it);
        it++;
        next++;
    }
    return (tmp);
}

unsigned int     Span::longestSpan(void) const
{
    std::list<int>    lst;
    lst = _lst;

    if (lst.size() < 2)
        return 0;

    lst.sort();
    return (abs(lst.back() - lst.front()));
}
