/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:34:22 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/04 19:40:05 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:

	static const int	_binary;
	int					_RawBits;

public:

	Fixed(void);
	~Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & src);


	int getRawBits( void ) const;
	void setRawBits( int const raw );

	int toInt( void ) const;
	float toFloat( void ) const;

};
	std::ostream & operator<<(std::ostream & os, Fixed const & f);

#endif