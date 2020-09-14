/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 17:28:13 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/02 13:54:49 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    this->_hitpoints = 100;
    this->_maxhitpoints = 100;
    this->_energypoints = 50;
    this->_maxenergypoints = 50;
    this->_level = 1;
    this->_name = name;
    this->_meleeattackdamage = 20;
    this->_rangedattackdamage = 15;
    this->_armordamagereduction = 3;
    std::cout << "Woo hoo ! " << this->_name << " now exists" << std::endl;
    return ;
}

ScavTrap::ScavTrap()
{
    this->_hitpoints = 100;
    this->_maxhitpoints = 100;
    this->_energypoints = 50;
    this->_maxenergypoints = 50;
    this->_level = 1;
    this->_meleeattackdamage = 20;
    this->_rangedattackdamage = 15;
    this->_armordamagereduction = 3;
    this->_name = "Queen";
    std::cout << "Woo hoo ! " << this->_name << " now exists" << std::endl;
    return ;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
    std::cout << "Copy me called" << std::endl;
    *this = src;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout <<"DIEEEE! " << this->_name << " is dead" << std::endl;
    return ;
}

std::string     ScavTrap::getName( void ) const
{
    return this->_name;
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

void            ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "Ranged attack by " << this->_name << "  at " << target << " causing " <<this->_rangedattackdamage << " points of damage!" << std::endl;
    std::cout << "Total hit points went from "  << this->_hitpoints;
    if (this->_hitpoints >= this->_rangedattackdamage)
        this->_hitpoints = this->_hitpoints - this->_rangedattackdamage;
    std::cout << " to " << this->_hitpoints << std::endl;
    return ;
}

void        ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "Mele attack by " << this->_name << " at " << target << " causing " <<this->_meleeattackdamage << " points of damage!" << std::endl;
    std::cout << "Total hit points went from "  << this->_hitpoints;;
    if (this->_hitpoints >= this->_meleeattackdamage)
        this->_hitpoints = this->_hitpoints - this->_meleeattackdamage;
    std::cout << " to " << this->_hitpoints << std::endl;
    return ;
}

void        ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "Taking damage " << this->_name << " of " << this->_armordamagereduction;
    std::cout << "Total energy points went from "  << this->_energypoints;
    if (this->_energypoints > this->_armordamagereduction)
        this->_energypoints = this->_energypoints - this->_armordamagereduction;
    std::cout << " to " << this->_energypoints;
    std::cout << ". AND hit points WOO changinnn by " << amount;
    std::cout << "if possible. Total hit points points went from "  << this->_energypoints;
    if (this->_hitpoints >= (int)amount)
        this->_hitpoints = this->_hitpoints - amount;
    std::cout << " to " << this->_energypoints << std::endl;

}

void        ScavTrap::beRepaired(unsigned int amount)
{   
    if (this->_energypoints < (int)(this->_maxenergypoints - amount))
    {
        std::cout << "Total energy points repairinnnn' by " << amount << " from " << this->_energypoints;
        this->_energypoints = this->_energypoints + amount;
        std::cout << " to " << this->_energypoints << std::endl;
    }
    else 
    {
        this->_energypoints = this->_maxenergypoints;
        std::cout << "At max energy points for " << this->_name <<std::endl;
    }
    if (this->_hitpoints < (int)(this->_maxhitpoints - amount))
    {
        std::cout << "Total hit points reparinnn' by " << amount << " from " << this->_hitpoints;
        this->_hitpoints = this->_hitpoints + amount;
        std::cout << " to " << this->_hitpoints << std::endl;
    }
    else 
    {
        this->_hitpoints = this->_maxhitpoints;
        std::cout << "At max hit points for " << this->_hitpoints <<std::endl;
    }
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
