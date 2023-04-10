/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:05:10 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/01 19:47:54 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{}

Base *  generate(void)
{
    Base *  base;
    int     random;

    random = rand() % 3;

    switch (random)
	{
		case 0:
			base = new A;
            std::cout << "generate A !" << std::endl;
			break;
		case 1:
			base = new B;
            std::cout << "generate B !" << std::endl;
			break;
		case 2:
			base = new C;
            std::cout << "generate C !" << std::endl;
			break;
	}
    return (base);
}

void    identify(Base* p)
{
    A* a;
    B* b;
    C* c;
    
    a = dynamic_cast<A *>(p);
    b = dynamic_cast<B *>(p);
    c = dynamic_cast<C *>(p);
    if (a != NULL)
        std::cout << "it's a A !" << std::endl;
    if (b != NULL)
        std::cout << "it's a B !" << std::endl;
    if (c != NULL)
        std::cout << "it's a C !" << std::endl;
}

void    identify(Base& p)
{
    try
    {
        dynamic_cast<A &>(p);
        std::cout << "it's a A !" << std::endl;
    }
    catch(std::exception &e) {}
    try
    {
        dynamic_cast<B &>(p);
        std::cout << "it's a B !" << std::endl;
    }
    catch(std::exception &e) {}
    try
    {
        dynamic_cast<C &>(p);
        std::cout << "it's a C !" << std::endl;
    }
    catch(std::exception &e) {}
}
