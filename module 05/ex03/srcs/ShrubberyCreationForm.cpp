/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:46:37 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/27 16:15:49 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructors and Destructors
ShrubberyCreationForm::ShrubberyCreationForm(void): AForm() //Canonical
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreation", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy): AForm(copy) //Canonical
{
    *this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() //Canonical
{}

// Overloaded Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) //Canonical
{
    if (this != &rhs)
        _target = rhs._target;
    return *this;
}



//Getter
//Functions

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (getIsSign() == false)
        throw FormNotSigned();
    if (getExecGrade() < executor.getGrade())
        throw GradeTooLowException();
    makeTree();
}


void    ShrubberyCreationForm::makeTree(void) const
{
    std::ofstream	outfile((_target + "_shrubbery").c_str()); 

    if (outfile)
    {
        outfile << "      # #### ####                     # #### ####               " << std::endl;
        outfile << "     ### \\/#|### |/####             ### \\/#|### |/####        " << std::endl;
        outfile << "    ##\\/#/ \\||/##/_/##/_#         ##\\/#/ \\||/##/_/##/_#     " << std::endl;
        outfile << "  ###  \\/###|/ \\/ # #####       ###  \\/###|/ \\/ # #####     " << std::endl;
        outfile << " ##_\\_#\\_\\## | #/###_/_####   ##_\\_#\\_\\## | #/###_/_####  " << std::endl;
        outfile << "## #### # \\ #| /  #### ##/##   ## #### # \\ #| /  #### ##/##   " << std::endl;
        outfile << " __#_--###`  |{,###---###-~      __#_--###`  |{,###---###-~     " << std::endl;
        outfile << "          \\ }{                           \\ }{                 " << std::endl;
        outfile << "           }}{                             }}{                  " << std::endl;
        outfile << "           }}{                             }}{                  " << std::endl;
        outfile << "      ejm  {{}                        ejm  {{}                  " << std::endl;
        outfile << "    _, -=-~{ .-^- _                 _, -=-~{ .-^- _             " << std::endl;
    }
    else
		std::cout << "ERROR: OutFile can't be created" << std::endl;
}