/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:46:56 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/27 15:21:11 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
    std::string _target;
protected:
public:
//Constructor and Destructor
    PresidentialPardonForm(void); //Canonical
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const & copy); //Canonical
    ~PresidentialPardonForm(); //Canonical

// Overloaded Operators
    PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs); //Canonical

    
//Getter
//Functions
    void	execute(Bureaucrat const & executor) const;
};

#endif