/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:46:45 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/27 16:15:29 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Constructors and Destructors
PresidentialPardonForm::PresidentialPardonForm(void): AForm() //Canonical
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardon", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy): AForm(copy) //Canonical
{
    *this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm() //Canonical
{}

// Overloaded Operators
PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) //Canonical
{
    if (this != &rhs)
		_target = rhs._target;
    return *this;
}

//Getter
//Functions
void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (getIsSign() == false)
        throw FormNotSigned();
    if (getExecGrade() < executor.getGrade())
        throw GradeTooLowException();
    std::cout << _target << " was pardoned by Zaphod Beeblebrox" << std::endl;
}