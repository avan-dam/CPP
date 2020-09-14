/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Interger.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 11:36:14 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/05 13:03:52 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERGER_CLASS_H
# define INTERGER_CLASS_H

#include <iostream>

class Interger {
   public:
        Interger( int const n );
        ~Interger( );
        
        int getvalue( void ) const;

        Interger & operator=(Interger const & rhs);
        Interger operator+(Interger const & rhs) const;

    private:
        int _n;
};

std::ostream & operator <<( std::ostream & o, Interger const & rhs );

#endif