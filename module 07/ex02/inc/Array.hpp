/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:34:32 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/14 19:33:32 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
private:
    T *_array;
    unsigned int _size;

    class OutOfBounds: public std::exception {
		public:
			virtual const char* what() const throw() {return ("Index out of bounds");}
	};

public:
//Constructor and Destructor
    Array(void): _array(NULL), _size(0) {}                  //Canonical
    Array(unsigned int n): _array(new T[n]()), _size(n) {}
    Array(Array const & copy) {*this = copy;}               //Canonical
    ~Array() {delete[] _array;}                             //Canonical

// Overloaded Operators
    Array & operator=(Array const & rhs);                   //Canonical
    T & operator[](unsigned int i);
    
//Getter
    unsigned int    size(void) const {return (_size);};

//Functions

};

template<typename T>
Array<T> & Array<T>::operator=(Array const & rhs)
{
    if (this != &rhs)
    {
	    _size = rhs._size;
        _array = new T[rhs._size];
        for (unsigned int i = 0; i < rhs._size; i++)
            _array[i] = rhs._array[i];
    }
    return (*this);
}

template<typename T>
T & Array<T>::operator[](unsigned int i)
{
    if(i >= _size)
       throw OutOfBounds();
    return (_array[i]);
}

#endif