/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 17:03:15 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:17:19 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
    	virtual ~PlasmaRifle();
		PlasmaRifle( const PlasmaRifle & src );
        PlasmaRifle &    operator=(  const PlasmaRifle & rhs );
        virtual void attack() const;
};

#endif
