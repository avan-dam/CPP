/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 16:55:40 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:17:17 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "AWeapon.hpp"

PowerFist::PowerFist() : AWeapon("Power First", 8, 50)
{
    return ;
}

PowerFist::~PowerFist()
{
    return;
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
    return ;
}

PowerFist::PowerFist( const PowerFist & src )
{
	*this = src;
	return;
}

PowerFist &    PowerFist::operator=(  const PowerFist & rhs )
{
    if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_AP = rhs._AP;
		this->_DP = rhs._DP;
	}
	return *this;
}
