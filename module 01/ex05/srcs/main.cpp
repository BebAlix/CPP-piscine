/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:50:06 by equesnel          #+#    #+#             */
/*   Updated: 2023/01/09 18:53:16 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl	msg;

	msg.complain("0");
	msg.complain("1");
	msg.complain("2");
	msg.complain("3");
	msg.complain("5");
	msg.complain("yolo");
	msg.complain("");
	return (0);
}