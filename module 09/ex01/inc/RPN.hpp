/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:46:44 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/23 16:45:07 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <exception>

class RPN
{
private:
    RPN(RPN const & copy); //Canonical
    RPN & operator=(RPN const & rhs); //Canonical
    void    calcul(char c);

    std::stack<int> _stack;
protected:
public:
//Constructor and Destructor
    RPN(void); //Canonical
    ~RPN(); //Canonical

//Functions
void    launch(std::string str);

};

#endif