/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:00:45 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/25 18:57:35 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <iomanip>
#include <sys/time.h>

class PmergeMe
{
private:
    PmergeMe & operator=(PmergeMe const & rhs); //Canonical
    PmergeMe(PmergeMe const & copy); //Canonical
    
    template <typename T>
    void    printCt(T &ct);

    template <typename T>
    void insertionSort(T &ct);

    template <typename T>
    void mergeSort(T &ct, T &ct1, T &ct2);

    template <typename T>
    void mergeInsertSort(T &ct);

    template <typename T>
    long int timeToSort(T &ct);

protected:
public:
//Constructor and Destructor
    PmergeMe(void); //Canonical
    ~PmergeMe(); //Canonical

//Functions
    void    launch(int argc, char **argv);
};

#endif