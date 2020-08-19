/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 11:38:29 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:17:43 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
    return ;
}

Enemy::Enemy(int hp, std::string const & type)
{
    this->_HP = hp;
    this->_type = type;
    return ;
}

Enemy::~Enemy()
{
    return ;
}

Enemy::Enemy( const Enemy & src )
{
    *this = src;
    return ;
}

Enemy &    Enemy::operator=(  const Enemy & rhs )
{
    if (this != &rhs)
    {
        this->_HP = rhs._HP;
        this->_type = rhs._type;
    }
    return *this;
}

std::string const & Enemy::getType() const
{
    return (this->_type);
}

int Enemy::getHP() const
{
    return(this->_HP);
}

void Enemy::setHP(int numb)
{
    this->_HP = numb;
    return ;
}


void Enemy::takeDamage(int damage)
{
    if (damage >= 0)
        this->_HP = this->_HP - damage;
    if (this->_HP < 0)
        this->_HP = 0;
    return ;
}
