/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:59:52 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/28 14:53:00 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

// Constructors and Destructors
Intern::Intern(void) //Canonical
{}

Intern::Intern(Intern const & copy) //Canonical
{
    *this = copy;
}

Intern::~Intern() //Canonical
{}

// Overloaded Operators
Intern & Intern::operator=(Intern const & rhs) //Canonical
{
    (void)rhs;
    return *this;
}

//Getter
//Functions
AForm * Intern::makeForm(std::string formName, std::string target)
{
    std::string	name[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
    AForm * tabForm[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    int j = 0;

    for (int i = 0; i < 3; i++)
    {
        if (formName == name[i])
           j = i;
        else
        {
            delete tabForm[i];
            tabForm[i] = NULL;
        }
        
    }
    if(tabForm[j] != NULL)
        std::cout << "Intern creates " << tabForm[j]->getName() << std::endl;
    else
        std::cout << "Intern can't creates the form : " << formName << std::endl;
    return (tabForm[j]);
}
