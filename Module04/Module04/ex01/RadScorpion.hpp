/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 11:52:02 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:17:11 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
# define RADSCORPION_H

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        RadScorpion();
		virtual ~RadScorpion();
		RadScorpion( const RadScorpion & src );
        RadScorpion &    operator=(  const RadScorpion & rhs );
};

#endif
