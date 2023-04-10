/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:34:22 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/04 16:26:27 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:

	static const int	_binary;
	int					_RawBits;

public:

	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed & );
	Fixed & operator=(Fixed const &);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

};

#endif