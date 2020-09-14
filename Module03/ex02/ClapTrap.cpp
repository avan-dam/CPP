/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 17:28:13 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/02 14:00:31 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->_hitpoints = 100;
    this->_maxhitpoints = 100;
    this->_level = 1;
    this->_name = name;
    std::cout << "Hocus pocus! " << this->_name << " now exists" << std::endl;
    return ;
}

ClapTrap::ClapTrap()
{
    this->_hitpoints = 100;
    this->_maxhitpoints = 100;
    this->_level = 1;
    this->_name = "Queen";
    std::cout << "Hocus pocus! " << this->_name << " now exists" << std::endl;
    return;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

ClapTrap::~ClapTrap()
{
    std::cout <<"Away with thee! Me CLAPTRAP called " << this->_name << " died" << std::endl;
    return ;
}

ClapTrap &    ClapTrap::operator=( ClapTrap const & rhs )
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

void            ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " launches a ranged attack at " << target << " causing " <<this->_rangedattackdamage << " points of damage!" << std::endl;
    std::cout << "Total hit points went from "  << this->_hitpoints;
    if (this->_hitpoints >= this->_rangedattackdamage)
        this->_hitpoints = this->_hitpoints - this->_rangedattackdamage;
    std::cout << " to " << this->_hitpoints << std::endl;
    return ;
}

void        ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " launches a mele attack at " << target << " causing " <<this->_meleeattackdamage << " points of damage!" << std::endl;
    std::cout << "Total hit points went from "  << this->_hitpoints;
    if (this->_hitpoints >= this->_meleeattackdamage)
        this->_hitpoints = this->_hitpoints - this->_meleeattackdamage;
    std::cout << " to " << this->_hitpoints << std::endl;
    return ;
}

void        ClapTrap::takeDamage(unsigned int amount)
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

void        ClapTrap::beRepaired(unsigned int amount)
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
