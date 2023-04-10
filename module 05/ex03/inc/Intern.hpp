/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:59:58 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/28 13:26:56 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_HPP
#define Intern_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
private:
protected:
public:
//Constructor and Destructor
    Intern(void); //Canonical
    Intern(Intern const & copy); //Canonical
    ~Intern(); //Canonical

// Overloaded Operators
    Intern & operator=(Intern const & rhs); //Canonical

//Getter
//Functions
    AForm * makeForm(std::string formName, std::string target);
};

#endif