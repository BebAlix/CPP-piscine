/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:01:45 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/28 11:23:10 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat g("Geraldine", 0); 
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    try
    {
        Bureaucrat k("Kevin", 151);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    try
    {
        Bureaucrat c("chef", 1);
        c.downGrade();
        std::cout << c << std::endl;
        c.upGrade();
        c.upGrade();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat c("Chef", 2);
        Form f("Chef form", 1, 75);
        c.signForm(f);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    
    return (0);
}