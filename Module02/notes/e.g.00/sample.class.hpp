/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sample.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 11:36:14 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/05 12:03:32 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {
   public:
        Sample( void );
        ~Sample( ); 
        
        void    bar( char const c ) const;
        void    bar( int const n ) const;
        void    bar( float const z ) const;
        void    bar(Sample const & i ) const;
};

#endif