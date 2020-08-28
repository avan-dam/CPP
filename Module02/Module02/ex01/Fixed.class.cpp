/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 17:06:42 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/28 11:16:22 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    int raw = 0 << _fractbits;
    setRawBits(raw);
}

Fixed::Fixed( const int n) {
    std::cout << "Int constructor called" << std::endl;
    long raw;
    raw = n << _fractbits;
    setRawBits(raw);
    return;
}

Fixed::Fixed ( const float f) {
    std::cout << "Float constructor called" << std::endl;
    int i = 0;
    double p = f;
    while (std::fmod(p,10.0) && (i < _fractbits))
    {
        i++;
        p = p * 2;
    }
    int raw = roundf(p);
    setRawBits(raw);
    return;
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
    return(this->_fpv);
}

int     Fixed::getfractbits( void ) const
{
    return(this->_fractbits);
}

void Fixed::setRawBits( int const raw )
{
    this->_fpv = raw;
    return ;
}

float Fixed::toFloat( void ) const{
    double power = 2;
    int i = 0;
    while (i < _fractbits - 1)
    {
        power = power * 2;
        i++;
    }
    float result = _fpv / power;
    return result;
} 

int Fixed::toInt( void ) const {
    return (this->_fpv >> _fractbits);
}

std::ostream &  operator<<(std::ostream & o, Fixed const & i )
{
    o << i.toFloat();
    return o;
}
