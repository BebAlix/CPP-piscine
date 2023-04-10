/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/26 15:48:26 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Constructors and Destructors

AForm::AForm(void): _name("Default"), _signGrade(75), _execGrade(75)							//Canonical AForm
{}								

AForm::AForm(const std::string name, const int signGrade, const int execGrade): _name(name), _isSign(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (_signGrade < 1)
		throw GradeTooHighException();
	if (_signGrade > 150)
		throw GradeTooLowException();
	if (_execGrade < 1)
		throw GradeTooHighException();
	if (_execGrade > 150)
		throw GradeTooLowException();
	_isSign = false;
}

AForm::AForm(AForm const & copy): _name(copy._name), _signGrade(copy._signGrade), _execGrade(copy._execGrade)			//Canonical AForm
{
	*this = copy;
}

AForm::~AForm(void)								//Canonical AForm
{}

// Overloaded Operators

AForm & AForm::operator=(AForm const & rhs)	//Canonical AForm
{
	if (this != &rhs)
		_isSign = rhs._isSign;
	return (*this);
}

std::ostream	& operator<<(std::ostream & os, AForm const & rhs)
{
	os << "Form : " << rhs.getName() << std::endl;
	os << "Sign Grade : " << rhs.getSignGrade() << std::endl;
	os << "exec Grade : " << rhs.getExecGrade() << std::endl;
	return (os);
}

// Public Methods

void	AForm::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > _signGrade)
		throw GradeTooLowException();
	_isSign = true;
}


// Getter

std::string AForm::getName(void) const 
{
	return (_name);
}

bool AForm::getIsSign(void) const 
{
	
	return (_isSign);
}

int AForm::getSignGrade(void) const 
{
	return (_signGrade);
}

int AForm::getExecGrade(void) const 
{
	return (_execGrade);
}



// Setter


// exception

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high !");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low !");
}

const char* AForm::FormNotSigned::what() const throw()
{
	return ("Form is not signed !");
}