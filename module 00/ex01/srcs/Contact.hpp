/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:11:09 by equesnel          #+#    #+#             */
/*   Updated: 2022/12/21 15:11:26 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
private:

	std::string _Infos[5];
	std::string _NameInfos[5];

	void		_InitNameInfos(void);

public:

		Contact(void);
		~Contact(void);

		void	InitContact(void);
		void	ShowContact(void) const;
		void	ShowAllInfosContact(void) const;
};


#endif
