/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 17:06:39 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/06 12:01:00 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int                 _fpv;
        static const int    _fractbits;
    public:
        Fixed();
        Fixed( const int n);
        Fixed( const float f);
        Fixed( Fixed const & src );
        ~Fixed();
        Fixed &     operator=( Fixed const & rhs );
        int         getRawBits( void ) const;
        int         getfractbits( void ) const;
        void        setRawBits( int const raw );
        float       toFloat( void ) const; 
        int         toInt( void ) const; 
};

std::ostream &  operator<<(std::ostream & o, Fixed const & i );

#endif