/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:13:05 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/26 14:49:35 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{

private:

	std::string _name;
	int			_grade;

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
		Bureaucrat(void);								//Canonical Form
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & copy);			//Canonical Form
		~Bureaucrat(void);								//Canonical Form

	// Overloaded Operators
		Bureaucrat & operator=(Bureaucrat const & rhs);	//Canonical Form

	// Public Methods
		void	upGrade(void);
		void	downGrade(void);

	// Getter
		std::string getName(void) const;
		int getGrade(void) const;

	// Setter
		

};

	std::ostream & operator<<(std::ostream & os, Bureaucrat const & b);

#endif