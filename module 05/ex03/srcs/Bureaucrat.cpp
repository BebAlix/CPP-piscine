/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:14:12 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/28 14:34:27 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructors and Destructors

Bureaucrat::Bureaucrat(void): _name("Roger"), _grade(75)							//Canonical Form
{}				

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)							//Canonical Form
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy)			//Canonical Form
{
	*this = copy;
}

Bureaucrat::~Bureaucrat(void)								//Canonical Form
{}

// Overloaded Operators

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)	//Canonical Form
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_grade = rhs._grade;
	}
	return (*this);
}

std::ostream	& operator<<(std::ostream & os, Bureaucrat const & b)
{
	os << b.getName() <<  ", bureaucrat grade " << b.getGrade() << std::endl;
	return (os);
}

// Public Methods

void	Bureaucrat::upGrade(void)
{
	if ((_grade - 1) < 1)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::downGrade(void)
{
	if ((_grade + 1) > 150)
		throw GradeTooLowException();
	_grade++;
}

void	Bureaucrat::signForm(AForm & form)
{
	AForm *err = NULL;

	if (err == &form)
	{
		std::cout << getName() << " couldn’t sign the form because he doesn't exist" << '\n';
		return ;
	}
	try
	{
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << getName() << " couldn’t sign " << form.getName() << " because " << e.what() << '\n';
	}
	
}

void	Bureaucrat::executeForm(AForm const & form)
{
	AForm *err = NULL;

	if (err == &form)
	{
		std::cout << getName() << " couldn’t executed the form because he doesn't exist" << '\n';
		return ;
	}
	try
	{
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << getName() << " couldn’t executed " << form.getName() << " because " << e.what() << '\n';
	}
}

// Getter

std::string Bureaucrat::getName(void) const 
{
	return (_name);
}

int Bureaucrat::getGrade(void) const 
{
	return (_grade);
}


// Setter


// exception

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade of bureaucrat is too high !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade of bureaucrat is too low !");
}
