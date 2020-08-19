/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 12:24:23 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:17:53 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"


Character::Character()
{
    return ;
}

Character::Character(std::string const & name)
{
    this->_name = name;
    this->_AP = 40;
    this->_weapon = NULL;
    return ;
}

Character::Character( const Character & src )
{
    *this = src;
    return ;
}
Character &    Character::operator=(  const Character & rhs )
{
    if (this != &rhs)
    {
        this->_AP = rhs._AP;
        this->_weapon = rhs._weapon;
        this->_name = rhs._name;
    }
    return *this;
}

Character::~Character()
{
    return ;
}

void Character::recoverAP()
{
    this->_AP = this->_AP + 10;
    if (this ->_AP > 40)
        this->_AP = 40;
    return ;
}

void Character::attack(Enemy* target)
{
    if ((this->_weapon->getAPCost() > this->_AP) || (this->_weapon == NULL))
        return ;
    this->_AP = this->_AP - this->_weapon->getAPCost();
    std::cout << this->_name << " attacks " << target->getType() << " with a " << this->_weapon->getName() << std::endl; 
    this->_weapon->attack();
    int numb = target->getHP() - this->_weapon->getDamage();
    target->setHP(numb);
    if (target->getHP() <= 0)
        delete target;
    return ;
}

void Character::equip(AWeapon* woh)
{
    this->_weapon = woh;
    return ;
}

std::string const & Character::getName() const
{
    return (this->_name);
}

int const & Character::getAP() const
{
    return (this->_AP);
}

std::string Character::getWeaponName() const
{
    if (this->_weapon == NULL)
        return ("no weapon");
    if (this->_weapon->getName() == "")
        return ("no weapon");
    return (this->_weapon->getName());
}

std::ostream &  operator<<(std::ostream & o, Character const & i )
{
    if (i.getWeaponName() == "no weapon")
        o << i.getName() << " has " << i.getAP() << " AP and is unarmed" << std::endl;
    else
        o << i.getName() << " has " << i.getAP() << " AP and wields a " << i.getWeaponName() << std::endl;
    return o;
}
