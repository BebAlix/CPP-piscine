/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:13:05 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/26 15:48:35 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

private:
		const std::string	_name;
		bool				_isSign;
		const int			_signGrade;
		const int			_execGrade;
		
protected:

	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class FormNotSigned: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

public:

	// Constructors and Destructors
		AForm(void);								//Canonical Form
		AForm(const std::string name, const int signGrade, const int execGrade);
		AForm(AForm const & copy);				//Canonical Form
		virtual ~AForm(void);								//Canonical Form

	// Overloaded Operators
		AForm & operator=(AForm const & rhs);	//Canonical Form

	// Public Methods
		void			beSigned(Bureaucrat const & Bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;

	// Getter
		std::string getName(void) const;
		bool 		getIsSign(void) const;
		int 		getSignGrade(void) const;
		int 		getExecGrade(void) const;

	// Setter
		
};

	std::ostream	& operator<<(std::ostream & os, AForm const & rhs);

#endif