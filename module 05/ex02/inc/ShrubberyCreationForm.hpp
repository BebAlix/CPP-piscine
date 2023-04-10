/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:46:48 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/27 14:55:52 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include <iostream>
#include <fstream>
#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
private:
    std::string _target;
protected:
public:
//Constructor and Destructor
    ShrubberyCreationForm(void); //Canonical
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & copy); //Canonical
    ~ShrubberyCreationForm(); //Canonical

// Overloaded Operators
    ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs); //Canonical

    
//Getter
//Functions
    void	execute(Bureaucrat const & executor) const;
     void    makeTree(void) const;
};

#endif