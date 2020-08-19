/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 16:55:40 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:17:23 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
    return ;
}

PlasmaRifle::~PlasmaRifle()
{
    return;
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
    return ;
}

PlasmaRifle::PlasmaRifle( const PlasmaRifle & src )
{
	*this = src;
	return;
}

PlasmaRifle &    PlasmaRifle::operator=(  const PlasmaRifle & rhs )
{
    if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_AP = rhs._AP;
		this->_DP = rhs._DP;
	}
	return *this;
}
