/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:34:09 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/06 17:35:23 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_binary = 8;

Fixed::Fixed(void)
{
	this->_RawBits = 0;
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(const int value)
{
	this->_RawBits = value << Fixed::_binary;
}

Fixed::Fixed(const float value)
{
	this->_RawBits = roundf(value * (1 << Fixed::_binary));
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & src)
{
		this->_RawBits = src._RawBits;
	return (*this);
}

int Fixed::getRawBits( void ) const
{
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

bool Fixed::operator>(Fixed const & rhs) const
{
	return (_RawBits > rhs._RawBits);
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (_RawBits < rhs._RawBits);
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (_RawBits >= rhs._RawBits);
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (_RawBits <= rhs._RawBits);
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return (_RawBits == rhs._RawBits);
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return not (_RawBits == rhs._RawBits);
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	Fixed result;

	result._RawBits = this->toFloat() + rhs._RawBits;
	return (result);
}
Fixed	Fixed::operator-(Fixed const & rhs) const
{
	Fixed result;

	result.setRawBits(this->toFloat() - rhs._RawBits);
	return (result);
}
Fixed	Fixed::operator*(Fixed const & rhs) const
{
	Fixed result;

	result._RawBits = this->toFloat() * rhs._RawBits;
	return (result);
}
Fixed	Fixed::operator/(Fixed const & rhs) const
{
	Fixed result;

	if (rhs._RawBits == 0)
	{
		std::cout << "can't divide by 0" << std::endl;
		return(*this);
	}
	result._RawBits = this->toFloat() / rhs._RawBits;
	return (result);
}

Fixed &	Fixed::operator++()
{
	_RawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed result(*this);

	++(*this);
	return (result);
}

Fixed &	Fixed::operator--()
{
	_RawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed result(*this);

	--*this;
	return (result);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a._RawBits < b._RawBits)
		return (a);
	else
		return (b);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a._RawBits < b._RawBits)
		return (a);
	else
		return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a._RawBits > b._RawBits)
		return (a);
	else
		return (b);
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a._RawBits > b._RawBits)
		return (a);
	else
		return (b);
}
