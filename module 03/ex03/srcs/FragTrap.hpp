/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:28:23 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/05 17:28:54 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{

private:

public:

    FragTrap(void);
    FragTrap(const FragTrap & to_copy);
    FragTrap & operator=(const FragTrap & to_copy);
    ~FragTrap(void);

    FragTrap(std::string name);

    void highFivesGuys(void);

};

#endif