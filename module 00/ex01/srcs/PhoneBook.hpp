/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:11:19 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/23 17:44:40 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <stdlib.h>

class PhoneBook
{
private:

		Contact _Contacts[8];
		int	_Index;
		int	_NbContact;

public:

		PhoneBook(void);
		~PhoneBook(void);

		void	AddContact(void);
		void	SearchContact(void) const;
};

#endif