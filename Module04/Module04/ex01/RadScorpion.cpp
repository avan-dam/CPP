/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 12:02:11 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:17:13 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
    return ;
}
RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
    return ;
}

RadScorpion::RadScorpion( const RadScorpion & src )
{
    *this = src;
    return;
}

RadScorpion &    RadScorpion::operator=(  const RadScorpion & rhs )
{
    if (this != &rhs)
    {
        this->_HP = rhs._HP;
        this->_type = rhs._type;
    }
    return *this;
}
