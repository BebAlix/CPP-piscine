/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/28 11:22:24 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors and Destructors

Form::Form(void): _name("Default"), _signGrade(75), _execGrade(75)							//Canonical Form
{}								

Form::Form(std::string name, int signGrade, int execGrade): _name(name), _isSign(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (_signGrade < 1)
		throw GradeTooHighException();
	if (_signGrade > 150)
		throw GradeTooLowException();
	if (_execGrade < 1)
		throw GradeTooHighException();
	if (_execGrade > 150)
		throw GradeTooLowException();
}

Form::Form(Form const & copy): _name(copy._name), _signGrade(copy._signGrade), _execGrade(copy._execGrade)			//Canonical Form
{
	*this = copy;
}

Form::~Form(void)								//Canonical Form
{}

// Overloaded Operators

Form & Form::operator=(Form const & rhs)	//Canonical Form
{
	if (this != &rhs)
		_isSign = rhs._isSign;
	return (*this);
}

std::ostream	& operator<<(std::ostream & os, Form const & rhs)
{
	os << "Form : " << rhs.getName() << std::endl;
	os << "Sign Grade : " << rhs.getSignGrade() << std::endl;
	os << "exec Grade : " << rhs.getExecGrade() << std::endl;
	return (os);
}

// Public Methods

void	Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > _signGrade)
		throw GradeTooLowException();
	_isSign = true;
}


// Getter

std::string Form::getName(void) const 
{
	return (_name);
}

bool Form::getIsSign(void) const 
{
	return (_isSign);
}

int Form::getSignGrade(void) const 
{
	return (_signGrade);
}

int Form::getExecGrade(void) const 
{
	return (_execGrade);
}



// Setter


// exception

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade of Form is too high !");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade of Form is too low !");
}