/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:01:45 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/28 14:53:18 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    try
    {
        Bureaucrat larbin("larbin", 146);
        Bureaucrat chef("chef", 5);

        PresidentialPardonForm pf("Roger");
        RobotomyRequestForm rf("Gerard");
        ShrubberyCreationForm sf("Geraldine");
        
        std::cout << larbin << std::endl;
        std::cout << chef << std::endl;
        std::cout << pf << std::endl;
        std::cout << rf << std::endl;
        std::cout << sf << std::endl;

        chef.signForm(pf);
        chef.signForm(rf);
        chef.signForm(sf);
        chef.executeForm(pf);
        chef.executeForm(rf);
        chef.executeForm(sf);

        std::cout << std::endl;
        
        larbin.signForm(pf);
        larbin.signForm(rf);
        larbin.signForm(sf);
        larbin.executeForm(pf);
        larbin.executeForm(rf);
        larbin.executeForm(sf);
    }
    catch(const std::exception& e)
    {
        std::cout<< e.what() << '\n';
    }

    std::cout << std::endl;

    try
    {
        Bureaucrat shrubberysign("shrubberysign", 145);
        Bureaucrat shrubberyexec("shrubberyexec", 137);
        Bureaucrat robotsign("robotsign", 72);
        Bureaucrat robotexec("robotexec", 45);
        Bureaucrat Presidentialsign("Presidentialsign", 25);
        Bureaucrat chef("chef", 5);

        ShrubberyCreationForm sf("Geraldine");
        RobotomyRequestForm rf("Gerard");
        PresidentialPardonForm pf("Roger");
        
        std::cout << shrubberysign << std::endl;
        std::cout << shrubberyexec << std::endl;
        std::cout << robotsign << std::endl;
        std::cout << robotexec << std::endl;
        std::cout << Presidentialsign << std::endl;
        std::cout << chef << std::endl;
        std::cout << sf << std::endl;
        std::cout << rf << std::endl;
        std::cout << pf << std::endl;

        chef.executeForm(sf);
        chef.executeForm(rf);
        chef.executeForm(pf);

        std::cout << std::endl;

        shrubberysign.signForm(sf);
        shrubberyexec.executeForm(sf);

        std::cout <<  std::endl;

        robotsign.signForm(rf);
        robotexec.executeForm(rf);

        std::cout << std::endl;
        
        Presidentialsign.signForm(pf);
        chef.executeForm(pf);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    std::cout << std::endl;

    {
        Bureaucrat robotsign("robotsign", 72);
        Bureaucrat robotexec("robotexec", 45);

        Intern someRandomIntern;
        AForm* rrf;
        AForm* err;

        err = someRandomIntern.makeForm("bad form", "Nobody");
        rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
        robotsign.signForm(*rrf);
        robotexec.executeForm(*rrf);
        robotsign.signForm(*err);
        robotexec.executeForm(*err);
       
        delete rrf;
        delete err;
    }
    return (0);
}