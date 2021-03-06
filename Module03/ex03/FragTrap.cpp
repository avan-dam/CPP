/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 13:27:31 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/02 21:23:51 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitpoints = 100;
    this->_maxhitpoints = 100;
    this->_energypoints = 100;
    this->_maxenergypoints = 100;
    this->_meleeattackdamage = 30;
    this->_rangedattackdamage = 20;
    this->_armordamagereduction = 5;
    std::cout << "I am a FRAGTRAP called " << this->_name << "with" << _energypoints << " energypoints and";
    std::cout << " max energy of " << this->_maxenergypoints << "and hit points of " << this->_hitpoints << " and max hit points of ";
    std::cout << this->_maxenergypoints << " on level " << this->_level << " and melee attack damage of " << this->_meleeattackdamage;
    std::cout << " ranged attack damage of " << this->_rangedattackdamage << "and armor damage reduction of ";
    std::cout << this->_armordamagereduction << std::endl;
}

FragTrap::FragTrap() : ClapTrap("Queen")
{
    this->_energypoints = 100;
    this->_maxenergypoints = 100;
    this->_meleeattackdamage = 30;
    this->_rangedattackdamage = 20;
    this->_armordamagereduction = 5;
    std::cout << "I am a FRAGTRAP called " << this->_name << "with" << _energypoints << " energypoints and";
    std::cout << " max energy of " << this->_maxenergypoints << "and hit points of " << this->_hitpoints << " and max hit points of ";
    std::cout << this->_maxenergypoints << " on level " << this->_level << " and melee attack damage of " << this->_meleeattackdamage;
    std::cout << " ranged attack damage of " << this->_rangedattackdamage << "and armor damage reduction of ";
    std::cout << this->_armordamagereduction << std::endl;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout <<"Away with thee! Me FRAGTRAP called " << this->_name << " died" << std::endl;
    return ;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap()
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

FragTrap &    FragTrap::operator=( FragTrap const & rhs )
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

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int nb = (rand() % 4);
    if (this->_energypoints < 25)
    {
        std::cout << "sorry not enough energy points to do ma vaulthunter_dot_exe tiiiing. Get some more pls." << std::endl;
    }
    else
    {
    std::cout << "Randomness targetting " << target << std::endl;
    if (nb == 0)
    {
        std::cout << "HAHA LOL JK TOOK ALL YOUR ENERGY" << std::endl;
        std::cout << "Total energy points went from "  << this->_energypoints;
        if (this->_energypoints > 0)
        {
            std::cout << "Total energy points went from "  << this->_energypoints;
            this->_energypoints = 0;
            std::cout << " to " << this->_energypoints << std::endl;
        }
        else
            std::cout << "LOL double jokes you had no energy anyway" << this->_energypoints;
    }
    if (nb == 1)
    {
        std::cout << "HAHA LOL JK TOOK ALL YOUR HIT POINTS" << std::endl;
        if (this->_hitpoints > 0)
        {
            std::cout << "Total hit points went from "  << this->_hitpoints;
            this->_hitpoints = 0;
            std::cout << " to " << this->_hitpoints << std::endl;
        }
        else
            std::cout << "LOL double jokes you had no hitpoints anyway" << this->_hitpoints;
    }
    if (nb == 2)
    {
        std::cout << "HAHA LOL JK 1 less energy" << std::endl;
        if (this->_energypoints > 0)
        {
            std::cout << "Total energy points went from "  << this->_energypoints;
            this->_energypoints = this->_energypoints - 1;
            std::cout << " to " << this->_energypoints << std::endl;
        }
        else
            std::cout << "LOL double jokes you had no energy anyway" << this->_energypoints;
    }
    if (nb == 3)
    {
        std::cout << "HAHA LOL JK 1 less hit" << std::endl;
        std::cout << "Total hit points went from "  << this->_hitpoints;
        if (this->_hitpoints > 0)
        {
            std::cout << "Total hit points went from "  << this->_hitpoints;
            this->_hitpoints = this->_hitpoints - 1;
            std::cout << " to " << this->_hitpoints << std::endl;
        }
        else
            std::cout << "LOL double jokes you had no hit anyway" << this->_hitpoints;
    }

    }
}
