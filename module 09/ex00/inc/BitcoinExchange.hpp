/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:54:58 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/28 16:59:40 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <map>
#include <iomanip>

class BitcoinExchange
{
private:
    BitcoinExchange(BitcoinExchange const & copy); //Canonical
    BitcoinExchange & operator=(BitcoinExchange const & rhs); //Canonical
    int     parseInput(std::string str);
    bool    parseData(std::string str);

    std::map<std::string, float> _csvmap;
protected:
public:
//Constructor and Destructor
    BitcoinExchange(void); //Canonical
    ~BitcoinExchange(); //Canonical

//Functions
bool    launch(int argc, char **argv);


};

#endif