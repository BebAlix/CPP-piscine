/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:50:06 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/06 17:04:40 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::min( a, b ) << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;

	}

	{
		Fixed c;
		Fixed d;

		std::cout << "incrementation et comparaison :"<< std::endl;
		std::cout << "c = " << c << std::endl;
		std::cout << "d = " << d << std::endl;
		std::cout << "(c == d) "<< (c == d) << std::endl;
		std::cout << "(c != d) "<< (c != d) << std::endl;
		std::cout << "d = " << ++d << std::endl;
		std::cout << "(c < d) "<< (c < d) << std::endl;
		std::cout << "(c > d) "<< (c > d) << std::endl;
		std::cout << "c = " << ++c << std::endl;
		std::cout << "(c <= d) "<< (c <= d) << std::endl;
		std::cout << "d = " << --d << std::endl;
		std::cout << "(c >= d) "<< (c >= d) << std::endl;
		c/Fixed(0);
	}
	return (0);

}