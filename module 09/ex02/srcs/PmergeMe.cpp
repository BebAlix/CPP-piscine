/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:00:42 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/28 16:58:19 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Constructors and Destructors
PmergeMe::PmergeMe(void) {}
PmergeMe::~PmergeMe() {}

//Functions

static bool	check_size(std::string input)
{
	std::string base;
	int		    i;

	base = "2147483647";
	i = 0;
    if (input.size() > base.size())
		return (false);
	if (input.size() < base.size())
		return (true);
	while (input[i])
	{
		if (input[i] == base[i])
			i++;
		else if (input[i] > base[i])
			return (false);
		else
			return (true);
	}
	return (true);
}

static bool isInt(std::string str)
{
    int i;

    i = 0;
    if (str == "")
        return false;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return (false);
        i++;
    }

    if (!check_size(str))
        return (false);
    return (true);
}

static void checkError(int argc, char **argv)
{
    if (argc < 2)
        throw std::logic_error("Error");
    for (int i = 1; i < argc; i++)
    {
        std::string str(argv[i]);
        if (!isInt(str))
            throw std::logic_error("Error");
    }
}

template <typename T>
void    PmergeMe::printCt(T &ct)
{
    typename T::iterator it;

    for (it = ct.begin(); it != ct.end(); it++)
        std::cout << " " << *it;
    std::cout << std::endl;
}

template <typename T>
void PmergeMe::insertionSort(T &ct) 
{
    typename T::iterator    iter, 
                            key, 
                            it;

    iter = ct.begin() + 1;
    while (iter != ct.end())
    {
        key = iter;
        it = iter - 1;
        while (it >= ct.begin() && *it > *key)
            std::swap(*it--, *key--);
        iter++;
    }
}

template <typename T>
void PmergeMe::mergeSort(T &ct, T &ct1, T &ct2) 
{
    size_t  size1 = ct1.size(),
            size2 = ct2.size(),
            p1 = 0,
            p2 = 0;

    while (p1 < size1 && p2 < size2) 
    {
        if (ct1.at(p1) < ct2.at(p2))
            ct.push_back(ct1.at(p1++));
        else
            ct.push_back(ct2.at(p2++));
    }
    while (p1 < size1)
        ct.push_back(ct1.at(p1++));
    while (p2 < size2)
        ct.push_back(ct2.at(p2++));
}

template <typename T>
void PmergeMe::mergeInsertSort(T &ct) 
{
    if (ct.size() <= 15)
    {
        insertionSort(ct);
        return;
    }

    typename T::iterator it;

    it = ct.begin() + (ct.size() / 2);
    T ct1(ct.begin(), it);
    T ct2(it, ct.end());

    mergeInsertSort(ct1);
    mergeInsertSort(ct2);
    
    ct.clear();
    mergeSort(ct, ct1, ct2);
}

template <typename T>
long int PmergeMe::timeToSort(T &ct)
{
    long int		s;
	long int		us;
	struct timeval	end;
    struct timeval	start;

    gettimeofday(&start, NULL);
    mergeInsertSort(ct);
	gettimeofday(&end, NULL);
	s = (end.tv_sec - start.tv_sec);
	us = (end.tv_usec - start.tv_usec);
	return (s + us);
}

void PmergeMe::launch(int argc, char **argv)
{
    std::vector<int>    vec;
    std::deque<int>     deq;
    long int            timeVec,
                        timeDeq,
                        timeManageData;
	struct timeval	    end,
                	    start;

    gettimeofday(&start, NULL);
    checkError(argc, argv);
    for (int i = 1; i < argc; i++)
    {
        vec.push_back(atoi(argv[i]));
        deq.push_back(atoi(argv[i]));
    }
	gettimeofday(&end, NULL);
	timeManageData = (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec);

    std::cout << "Before:";
    printCt(vec);

    timeVec = timeToSort(vec);
    timeDeq = timeToSort(deq);

    std::cout << "after:";
    printCt(vec);
    std::cout << std::fixed;
    std::cout << "Time to process a range of " << vec.size() <<  " elements with std::vector : " << timeVec  + timeManageData << " us" << std::endl;
    std::cout << "Time to process a range of " << deq.size() <<  " elements with std::deque : " << timeDeq  + timeManageData << " us" << std::endl;
}