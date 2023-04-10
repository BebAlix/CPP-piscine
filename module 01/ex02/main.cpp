/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:11:47 by equesnel          #+#    #+#             */
/*   Updated: 2022/12/22 20:04:42 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &strinfREF = str;

    std::cout << "Adresse str :" << &str << std::endl;
    std::cout << "Adresse PTR :" << stringPTR << std::endl;
    std::cout << "Adresse REF :" << &strinfREF << std::endl;

    std::cout << "Value str :" << str << std::endl;
    std::cout << "Value PTR :" << *stringPTR << std::endl;
    std::cout << "Value REF :" << strinfREF << std::endl;

    return (0);
}