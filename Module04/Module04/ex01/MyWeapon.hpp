/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MyWeapon.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 16:04:51 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:17:26 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYWEAPON_H
# define MYWEAPON_H

#include "AWeapon.hpp"

class MyWeapon : public AWeapon
{
    public:
        MyWeapon();
    	virtual ~MyWeapon();
		MyWeapon( const MyWeapon & src );
        MyWeapon &    operator=(  const MyWeapon & rhs );
        virtual void attack() const;
};

#endif
