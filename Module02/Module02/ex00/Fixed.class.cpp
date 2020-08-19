/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 17:06:42 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/12 14:01:06 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    int raw = 0 << _fractbits;
    setRawBits(raw);
}

Fixed::Fixed( Fixed const & src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &    Fixed::operator=( Fixed const & rhs )
{
    std::cout << "Assignment operator called" << std::endl;
    if ( this != &rhs )
        this->_fpv = rhs._fpv;
    return *this;
}

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fpv;
}

void Fixed::setRawBits( int const raw )
{
    this->_fpv = raw;
    return ;
}

const int     Fixed::_fractbits = 8;
