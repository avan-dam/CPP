/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 12:02:11 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/03 12:11:53 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
    return ;
}
SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
    return ;
}

SuperMutant::SuperMutant( const SuperMutant & src ) : Enemy()
{
    *this = src;
    return;
}

SuperMutant &    SuperMutant::operator=(  const SuperMutant & rhs )
{
    if (this != &rhs)
    {
        this->_HP = rhs._HP;
        this->_type = rhs._type;
    }
    return *this;
}

void SuperMutant::takeDamage(int damage)
{
    return (Enemy::takeDamage(damage - 3));
}
