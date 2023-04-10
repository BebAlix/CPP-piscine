/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:06:08 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/03 18:22:27 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.h"

void  printData(Data *data)
{
   std::cout << "Data   = " << data << " " << data->name << " have " << data->pv << " pv" << std::endl;
}

int main(void)
{
   Data data;
   uintptr_t unsInt;

   data.name = "Roger";
   data.pv = 10;

   printData(&data);
   unsInt = Serializer::serialize(&data);
   std::cout << "unsInt = 0x" << unsInt << " " << data.name << " have " << data.pv << " pv" << std::endl;
   printData(Serializer::deserialize(unsInt));
   std::cout << "unsInt in hexa = 0x" << std::hex << unsInt << std::endl;
   
   
   return (0);
}