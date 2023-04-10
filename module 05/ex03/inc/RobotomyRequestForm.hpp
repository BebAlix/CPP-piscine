/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:46:51 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/27 15:14:24 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "AForm.hpp"
class RobotomyRequestForm: public AForm
{
private:
    std::string _target;
protected:
public:
//Constructor and Destructor
    RobotomyRequestForm(void); //Canonical
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const & copy); //Canonical
    ~RobotomyRequestForm(); //Canonical

// Overloaded Operators
    RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs); //Canonical

    
//Getter
//Functions
    void	execute(Bureaucrat const & executor) const;
    void    makeRobot(void) const;
};

#endif