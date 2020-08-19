/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 17:06:39 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/12 14:01:01 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>

class Fixed {
    private:
        int                 _fpv;
        static const int    _fractbits;
    public:
        Fixed();
        Fixed( Fixed const & src );
        ~Fixed();
        Fixed &    operator=( Fixed const & rhs );
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif