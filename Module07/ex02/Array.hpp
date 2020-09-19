/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 13:26:24 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/19 17:33:53 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template< typename T >
class Array {
    public:
        Array() : _myTs(NULL), _count(0)
        {
        }
        Array(unsigned int n) : _myTs(new T[n]), _count(n)
        {
        }
        Array( Array const & src )
        {
            this->_count = src._count;
            this->_myTs = new T[this->_count];
            for (unsigned int i = 0; i < this->_count; i++)
                this->_myTs[i] = src._myTs[i];
            return;
        }
        Array &  operator=( Array const & rhs )
        {
            delete [] this->_myTs;
            this->_count = rhs._count;
            this->_myTs = new T[this->_count];
            for (unsigned int i = 0; i < this->_count; i++)
                this->_myTs[i] = rhs._myTs[i];
            return *this; 
        }
        class notAccessibleException : public std::exception {
 		public:
            notAccessibleException(void) {return;}
            notAccessibleException(notAccessibleException const & src) {*this = src;}
            ~notAccessibleException(void) throw() {return;}
            notAccessibleException & operator=(notAccessibleException const & rhs) {(void)rhs; return (*this);}
			virtual const char* what() const throw()
            {
                return "Not Accessible Exception";
            }
  		};
        T &  operator[](unsigned int n) const
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
