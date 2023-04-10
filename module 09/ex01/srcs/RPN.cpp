/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:46:41 by equesnel          #+#    #+#             */
/*   Updated: 2023/04/07 14:48:11 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// Constructors and Destructors
RPN::RPN(void) {}
RPN::~RPN() {}

//Functions

void     RPN::calcul(char c)
{
    int a;
    int b;

    if (_stack.size() < 2)
        throw std::length_error("Error");
    b = _stack.top();
    _stack.pop();
    a = _stack.top();
    _stack.pop();

    switch (c)
    {
    case '+':
        _stack.push(a + b);
        break;
    case '-':
        _stack.push(a - b);
        break;
    case '*':
        _stack.push(a * b);
        break;
    case '/':
        if (b == 0)
            throw std::logic_error("Error");
        _stack.push(a / b);
        break;
    }
}

void    RPN::launch(std::string str)
{
    int i = 0;

    while (str[i])
    {
        if (isdigit(str[i]))
            _stack.push(str[i] - '0');
        else if (str[i] == '-' || 
                str[i] == '+' || 
                str[i] == '/' || 
                str[i] == '*')
            calcul(str[i]);
        else
            throw std::invalid_argument("Error");
        i++;
        if (!str[i])
            break;
        if (str[i] != ' ')
            throw std::invalid_argument("Error");
        i++;
    }
    if (_stack.size() == 1)
        std::cout << _stack.top() << std::endl;
    else
        throw std::logic_error("Error");
}