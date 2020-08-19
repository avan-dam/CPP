/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 11:52:02 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:17:07 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant();
		virtual ~SuperMutant();
		SuperMutant( const SuperMutant & src );
        SuperMutant &    operator=(  const SuperMutant & rhs );
		virtual void takeDamage(int damage);
};

#endif
