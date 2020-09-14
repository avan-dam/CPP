/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MyWeapon.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 16:55:40 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/03 12:27:48 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MyWeapon.hpp"
#include "AWeapon.hpp"

MyWeapon::MyWeapon() : AWeapon("MY WEAPON", 5, 21)
{
    std::cout << "HEHE MY WEAPON IS MADE" << std::endl;
    return ;
}

MyWeapon::~MyWeapon()
{
    std::cout << "MY WEAPON IS GONE" << std::endl;
    return;
}

void MyWeapon::attack() const
{
    std::cout << "* MY WEAPON IS ATTACKING *" << std::endl;
    return ;
}

MyWeapon::MyWeapon( const MyWeapon & src ) : AWeapon()
{
	*this = src;
	return;
}

MyWeapon &    MyWeapon::operator=(  const MyWeapon & rhs )
{
    if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_AP = rhs._AP;
		this->_DP = rhs._DP;
	}
	return *this;
}
