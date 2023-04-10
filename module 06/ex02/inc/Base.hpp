/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:18:06 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/01 19:34:32 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Base_HPP
#define Base_HPP

#include <iostream>
#include <cstdlib>

class Base
{
public:
    virtual ~Base();
};

Base *  generate(void);
void    identify(Base* p);
void    identify(Base& p);

#endif