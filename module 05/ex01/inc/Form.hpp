/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:13:05 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/26 15:48:35 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

private:
		const std::string	_name;
		bool				_isSign;
		const int			_signGrade;
		const int			_execGrade;

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

public:

	// Constructors and Destructors
		Form(void);								//Canonical Form
		Form(std::string name, int signGrade, int execGrade);
		Form(Form const & copy);				//Canonical Form
		~Form(void);								//Canonical Form

	// Overloaded Operators
		Form & operator=(Form const & rhs);	//Canonical Form

	// Public Methods
		void	beSigned(Bureaucrat const & Bureaucrat);

	// Getter
		std::string getName(void) const;
		bool 		getIsSign(void) const;
		int 		getSignGrade(void) const;
		int 		getExecGrade(void) const;

	// Setter
		
};

	std::ostream	& operator<<(std::ostream & os, Form const & rhs);

#endif