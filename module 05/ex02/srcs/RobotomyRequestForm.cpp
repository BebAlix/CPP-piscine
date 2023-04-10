/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:46:41 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/27 16:15:53 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Constructors and Destructors
RobotomyRequestForm::RobotomyRequestForm(void): AForm() //Canonical
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequest", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy): AForm(copy) //Canonical
{
    *this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm() //Canonical
{}

// Overloaded Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) //Canonical
{
    if (this != &rhs)
        _target = rhs._target;
    return *this;
}

//Getter
//Functions
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (getIsSign() == false)
        throw FormNotSigned();
    if (getExecGrade() < executor.getGrade())
        throw GradeTooLowException();
    makeRobot();
}

void    RobotomyRequestForm::makeRobot(void) const
{
    int i;

    srand (time(NULL));
    i = rand() % 2;

    std::cout << "vrrrrrrr vrrrrrr !!!!" << std::endl;
    if (i)
        std::cout << _target << " has been robotomyse !" << std::endl;
    else
        std::cout << "Robotomy Failed !" << std::endl;
}
