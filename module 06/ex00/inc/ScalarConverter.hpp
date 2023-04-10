/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:30:24 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/03 17:03:49 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
#define ScalarConverter_HPP

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <cerrno>
#include <errno.h>
#include <string>
#include <sstream>

class ScalarConverter
{
private:
//Constructor and Destructor
    ScalarConverter(void); //Canonical
    ScalarConverter(ScalarConverter const & copy); //Canonical
    ~ScalarConverter(); //Canonical

// Overloaded Operators
    ScalarConverter & operator=(ScalarConverter const & rhs); //Canonical
protected:
public: 

//Getter
//Functions
    static bool convert(std::string str);
    
};

#endif