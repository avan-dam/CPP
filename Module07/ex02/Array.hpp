/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 13:26:24 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/17 08:09:40 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template< typename T >
class Array {
    public:
        Array()
        {
            T* myTs = new T;
            this->_myTs = myTs;
            this->_count = 0;
        }
        Array(unsigned int n)
        {
            T* myTs = new T[n];
            this->_myTs = myTs;
            this->_count = n;
        }
        Array( Array const & src )
        {
            this->_count = src._count;
            T* myTs = new T[this->_count];
            this->_myTs = myTs;
            for (unsigned int i = 0; i < this->_count; i++)
                this->_myTs[i] = src._myTs[i];
            return;
        }
        Array &  operator=( Array const & rhs )
        {
            this->_count = rhs._count;
            T* myTs = new T[this->_count];
            for (unsigned int i = 0; i < this->_count; i++)
                this->_myTs[i] = rhs._myTs[i];
                // this->_myTs[i] = rhs._myTs[i]->clone();
            return *this; 
        }
        class notAccessibleException : public std::exception {
 		public:
			virtual const char* what() const throw()
            {
                return "Not Accessible Exception";
            }
  		};
        T &  operator[](unsigned int n)
        {
            if (n >= this->_count)
                throw notAccessibleException();
              return (this->_myTs[n]);
        }
        ~Array()
        {
            delete [] this->_myTs;
        }
        unsigned int size() const
        {
            return this->_count;
        }
    private:
        T*              _myTs;
        unsigned int    _count;
};

#endif
