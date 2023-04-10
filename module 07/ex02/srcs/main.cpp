/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:06:08 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/15 15:12:01 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>

#define SIZE 3

int main(void)
{
    Array<int> A(SIZE);

    for (int i = 0; i < SIZE; i++)
        A[i] = i;

    Array<int> B(A);

    for (int i = 0; i < SIZE; i++)
        A[i] = i + SIZE;

    Array<int> C;

    std::cout << "~~~~~~~~~ check empty ~~~~~~~~~" << std::endl;
    try
    {
        std::cout << C[0] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
   
    C = A;

    for (int i = 0; i < SIZE; i++)
        A[i] = i + SIZE * 2;


    std::cout << "~~~~~~~~~ check copy ~~~~~~~~~" << std::endl;

    std::cout << "B : ";
    for (int i = 0; i < SIZE; i++)
        std::cout << B[i] << " ";
    std::cout << std::endl;

    std::cout << "C : ";
    for (int i = 0; i < SIZE; i++)
        std::cout << C[i] << " ";
    std::cout << std::endl;

    std::cout << "A : ";
    for (int i = 0; i < SIZE; i++)
        std::cout << A[i] << " ";
    std::cout << std::endl;

    std::cout << "~~~~~~~~~ check exception ~~~~~~~~~" << std::endl;
    std::cout << "A[SIZE] : " ;
    try
    {
        std::cout << A[SIZE] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "A[SIZE - 1] : " ;
    try
    {
        std::cout << A[SIZE - 1] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << "~~~~~~~~~ check type ~~~~~~~~~" << std::endl;

    std::cout << "float : ";

    Array<float> f(SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        f[i] = i + 0.5f;
        std::cout << f[i] << "f ";
    }
    std::cout << std::endl;

    std::cout << "double : ";

    Array<double> d(SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        d[i] = i + 0.5;
        std::cout << d[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "string : ";

    Array<std::string> str(3);

    str[0] = "salut ";
    str[1] = "la ";
    str[2] = "mif !";

    for (int i = 0; i < 3; i++)
        std::cout << str[i];

    std::cout << std::endl;
    
    return 0;
}