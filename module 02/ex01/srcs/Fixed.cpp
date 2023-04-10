/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:34:09 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/06 16:27:45 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_binary = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_RawBits = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_RawBits = value << Fixed::_binary;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_RawBits = roundf(value * (1 << Fixed::_binary));
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & src)
{
	std::cout << "Copy assignment operator called" << std::endl;
		this->_RawBits = src._RawBits;
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_RawBits);
}

void Fixed::setRawBits( int const raw )
{
	this->_RawBits = raw;
}

int Fixed::toInt( void ) const
{   
	int result;

	result = _RawBits >> Fixed::_binary;
	return (result);
}

float Fixed::toFloat( void ) const
{
	float result;

	result = (float)this->_RawBits / (1 << Fixed::_binary);
	return (result);
}

std::ostream	& operator<<(std::ostream & os, Fixed const & f)
{
	os << f.toFloat();
	return (os);
}


