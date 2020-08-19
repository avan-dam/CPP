/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 17:28:13 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/12 14:11:05 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    this->_hitpoints = 100;
    this->_maxhitpoints = 100;
    this->_energypoints = 100;
    this->_maxenergypoints = 100;
    this->_level = 1;
    this->_name = name;
    this->_meleeattackdamage = 30;
    this->_rangedattackdamage = 20;
    this->_armordamagereduction = 5;
    std::cout << "Hocus pocus! " << this->_name << " now exists" << std::endl;
    return ;
}

FragTrap::FragTrap( FragTrap const & src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

FragTrap::~FragTrap()
{
    std::cout <<"Away with thee! " << this->_name << " died" << std::endl;
    return ;
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

void            FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " launches a ranged attack at " << target << " causing " <<this->_rangedattackdamage << " points of damage!" << std::endl;
    std::cout << "Total hit points went from "  << this->_hitpoints;
    if (this->_hitpoints >= this->_rangedattackdamage)
        this->_hitpoints = this->_hitpoints - this->_rangedattackdamage;
    std::cout << " to " << this->_hitpoints << std::endl;
    return ;
}

void        FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " launches a mele attack at " << target << " causing " <<this->_meleeattackdamage << " points of damage!" << std::endl;
    std::cout << "Total hit points went from "  << this->_hitpoints;
    if (this->_hitpoints >= this->_meleeattackdamage)
        this->_hitpoints = this->_hitpoints - this->_meleeattackdamage;
    std::cout << " to " << this->_hitpoints << std::endl;
    return ;
}

void        FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "FR4G-TP " << this->_name << " WILL TAKE DAMAGE of " << this->_armordamagereduction;
    std::cout << "Total energy points went from "  << this->_energypoints;
    if (this->_energypoints > this->_armordamagereduction)
        this->_energypoints = this->_energypoints - this->_armordamagereduction;
    std::cout << " to " << this->_energypoints;
    std::cout << ". AND WILL DAMAGE hit points by " << amount;
    std::cout << ". Total hit points points went from "  << this->_energypoints;
    if (this->_hitpoints >= (int)amount)
        this->_hitpoints = this->_hitpoints - amount;
    std::cout << " to " << this->_energypoints << std::endl;

}

void        FragTrap::beRepaired(unsigned int amount)
{   
    if (this->_energypoints < (int)(this->_maxenergypoints - amount))
    {
        std::cout << "Repairing total energy points by " << amount << " from " << this->_energypoints;
        this->_energypoints = this->_energypoints + amount;
        std::cout << " to " << this->_energypoints << std::endl;
    }
    else 
    {
        this->_energypoints = this->_maxenergypoints;
        std::cout << "Max energy points for " << this->_name <<std::endl;
    }
    if (this->_hitpoints < (int)(this->_maxhitpoints - amount))
    {
        std::cout << "Repairing total hit points by " << amount << " from " << this->_hitpoints;
        this->_hitpoints = this->_hitpoints + amount;
        std::cout << " to " << this->_hitpoints << std::endl;
    }
    else 
    {
        this->_hitpoints = this->_maxhitpoints;
        std::cout << "Hit energy points for " << this->_hitpoints <<std::endl;
    }
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
    if (nb == 4)
    {
        std::cout << "HAHA LOL JK 2 less energy" << std::endl;
        if (this->_energypoints > 1)
        {
            std::cout << "Total energy points went from "  << this->_energypoints;
            this->_energypoints = this->_energypoints - 2;
            std::cout << " to " << this->_energypoints << std::endl;
        }
        else
            std::cout << "LOL double jokes you had no energy anyway" << this->_energypoints;
    }
}

