/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 11:36:14 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/05 13:55:30 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

# include <iostream>

class Sample {
   public:
        Sample( void );
        Sample( int const n );
        Sample( Sample const & src );
        ~Sample( ); 
        
        Sample &    operator=( Sample const & rhs );

        int         getFoo( void ) const;

    private:
        int         _foo;
};

std::ostream &  operator<<(std::ostream & o, Sample const & i );

#endif