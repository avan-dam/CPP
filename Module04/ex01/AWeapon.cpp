/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 16:56:37 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:17:58 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	return;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->_name = name;
	this->_AP = apcost;
	this->_DP = damage;
}

AWeapon::~AWeapon()
{
	return;
}

AWeapon::AWeapon( const AWeapon & src )
{
	*this = src;
	return;
}

AWeapon &    AWeapon::operator=(  const AWeapon & rhs )
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_AP = rhs._AP;
		this->_DP = rhs._DP;
	}
	return *this;
}

std::string const & AWeapon::getName() const
{
	return (this->_name);
}

int AWeapon::getAPCost() const
{
	return (this->_AP);
}

int AWeapon::getDamage() const
{
	return(this->_DP);
}
