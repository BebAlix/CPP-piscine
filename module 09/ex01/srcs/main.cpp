/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:44:57 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/23 16:06:47 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) 
{
    if (argc != 2)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }

    RPN rpn;
    std::string str(argv[1]);
    try
    {
        rpn.launch(str);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return 1;
    }

    return 0;
}
