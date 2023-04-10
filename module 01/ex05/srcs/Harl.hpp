/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:34:22 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/10 15:51:49 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
# include <stdlib.h>

class Harl
{
private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:

	Harl(void);
	~Harl(void);

	void complain( std::string level );

};

#endif