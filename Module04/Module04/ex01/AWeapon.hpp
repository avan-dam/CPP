/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 15:54:30 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/04 12:27:27 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

#include <iostream>

class AWeapon
{	
    protected:
        std::string _name;
		int			_DP;
		int			_AP;
		AWeapon();
    public:
        AWeapon(std::string const & name, int apcost, int damage);
    	virtual ~AWeapon();
		AWeapon( const AWeapon & src );
        AWeapon &    operator=(  const AWeapon & rhs );
	    std::string const & getName() const;
    	int getAPCost() const;
    	int getDamage() const;
    	virtual void attack() const = 0;
	private:
};

#endif
