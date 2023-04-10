/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:37:03 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/16 17:19:49 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <list>

template<typename T>
class MutantStack: public std::stack<T>
{
private:
protected:
public:
//Constructor and Destructor
    MutantStack(void): std::stack<T>() {}
    MutantStack(MutantStack const & copy) : std::stack<T>(copy) {*this = copy;} //Canonical
    ~MutantStack() {}

// Overloaded Operators
    MutantStack & operator=(MutantStack const & rhs)
    {
	    std::stack<T>::operator=(rhs);
        return (*this);
    }
    
//Getter
//Functions

    typedef typename std::stack<T>::container_type::iterator    iterator;

    iterator begin(void) { return this->c.begin(); }
    iterator end(void) { return this->c.end(); }
};


#endif