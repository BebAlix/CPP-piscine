/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:06:08 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/16 12:22:03 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::cout << "~~~~~ Classic test ~~~~~" << std::endl;
    {
        try
        {
            Span sp = Span(5);

            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);


            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            
            sp.addNumber(13);

        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }
    }
    std::cout << "~~~~~ Not enough numbers ~~~~~" << std::endl;
    {
        try
        {
            Span sp = Span(5);
            
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            
            sp.addNumber(6);

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }
        
    }
    std::cout << "~~~~~ list empty ~~~~~" << std::endl;
    {
        try
        {
            Span sp = Span(0);

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            
            sp.addNumber(6);

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }
    }
    std::cout << "~~~~~ Iterator range ~~~~~" << std::endl;
    {
        try
        {
            Span sp = Span(5);
            std::list<int> numbers;

            numbers.push_back(6);
            numbers.push_back(3);
            numbers.push_back(17);
            numbers.push_back(9);
            numbers.push_back(11);

            sp.addNumber(numbers);

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }
    }
    return 0;
}
