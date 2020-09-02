/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 13:27:41 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/02 14:20:04 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_energypoints = 50;
    this->_maxenergypoints = 50;
    this->_meleeattackdamage = 20;
    this->_rangedattackdamage = 15;
    this->_armordamagereduction = 3;
    std::cout << "I am a SCAVTRAP called " << this->_name << "with" << _energypoints << " energypoints and";
    std::cout << " max energy of " << this->_maxenergypoints << "and hit points of " << this->_hitpoints << " and max hit points of ";
    std::cout << this->_maxenergypoints << " on level " << this->_level << " and melee attack damage of " << this->_meleeattackdamage;
    std::cout << " ranged attack damage of " << this->_rangedattackdamage << "and armor damage reduction of ";
    std::cout << this->_armordamagereduction << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap("Queen")
{
    this->_energypoints = 50;
    this->_maxenergypoints = 50;
    this->_meleeattackdamage = 20;
    this->_rangedattackdamage = 15;
    this->_armordamagereduction = 3;
    std::cout << "I am a SCAVTRAP called " << this->_name << "with" << _energypoints << " energypoints and";
    std::cout << " max energy of " << this->_maxenergypoints << "and hit points of " << this->_hitpoints << " and max hit points of ";
    std::cout << this->_maxenergypoints << " on level " << this->_level << " and melee attack damage of " << this->_meleeattackdamage;
    std::cout << " ranged attack damage of " << this->_rangedattackdamage << "and armor damage reduction of ";
    std::cout << this->_armordamagereduction << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout <<"Away with thee! Me SCAVTRAP called " << this->_name << " died" << std::endl;
    return ;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

ScavTrap &    ScavTrap::operator=( ScavTrap const & rhs )
{
    std::cout << "Assignment operator called" << std::endl;
    if ( this != &rhs )
    {
        this->_name = rhs._name;
        this->_hitpoints = rhs._hitpoints;
        this->_maxhitpoints = rhs._maxhitpoints;
        this->_energypoints = rhs._energypoints;
        this->_maxenergypoints = rhs._maxenergypoints;
        this->_level = rhs._level;
        this->_meleeattackdamage = rhs._meleeattackdamage;
        this->_rangedattackdamage = rhs._rangedattackdamage;
        this->_armordamagereduction = rhs._armordamagereduction;
    }
    return *this;
}

void	ScavTrap::challengeNewcomer()
{
    std::cout << "My random challenge is for my ScavTrap called " << this->_name << " to tell you ";
    int nb = (rand() % 4);
    if (nb == 0)
    {
        std::cout << "Magic waits for no one, apprentice!" << std::endl;
    }
    if (nb == 1)
    {
        std::cout << "There's more to learn!" << std::endl;
    }
    if (nb == 2)
    {
        std::cout << "Hey! You're TALKING to me! And I didn't even have an exclamation point over my head! This is the BEST day of my life!" << std::endl;
    }
    if (nb == 3)
    {
        std::cout << "Sooooo... how are things?" << std::endl;
    }
    if (nb == 4)
    {
        std::cout << "Hey, best friend!" << std::endl;
    }
}
