/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/11 12:51:43 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/02 15:52:31 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
    this->_name = "Queen";
    this->_level = 1;
    this->_hitpoints = 100;
    this->_maxhitpoints = 100;
    this->_energypoints = 120;
    this->_maxenergypoints = 120;
    this->_meleeattackdamage = 60;
    this->_rangedattackdamage = 20;
    this->_armordamagereduction = 5;
    std::cout << "I am a SUPERTRAP called " << this->_name << " with " << _energypoints << " energypoints and";
    std::cout << " max energy of " << this->_maxenergypoints << "and hit points of " << this->_hitpoints << " and max hit points of ";
    std::cout << this->_maxhitpoints << " on level " << this->_level << " and melee attack damage of " << this->_meleeattackdamage;
    std::cout << " ranged attack damage of " << this->_rangedattackdamage << "and armor damage reduction of ";
    std::cout << this->_armordamagereduction << std::endl;
    return ;
}

SuperTrap::SuperTrap(std::string name)
{
    this->_name = name;
    this->_level = 1;
    this->_hitpoints = 100;
    this->_maxhitpoints = 100;
    this->_energypoints = 120;
    this->_maxenergypoints = 120;
    this->_meleeattackdamage = 60;
    this->_rangedattackdamage = 20;
    this->_armordamagereduction = 5;
    std::cout << "I am a SUPERTRAP called " << this->_name << " with " << _energypoints << " energypoints and";
    std::cout << " max energy of " << this->_maxenergypoints << "and hit points of " << this->_hitpoints << " and max hit points of ";
    std::cout << this->_maxhitpoints << " on level " << this->_level << " and melee attack damage of " << this->_meleeattackdamage;
    std::cout << " ranged attack damage of " << this->_rangedattackdamage << "and armor damage reduction of ";
    std::cout << this->_armordamagereduction << std::endl;
    return ;
}

SuperTrap::~SuperTrap()
{
    std::cout <<"Away with thee! Me SUPERTRAP called " << this->_name << " died" << std::endl;
    return ;
}

SuperTrap::SuperTrap( SuperTrap const & src ) : ClapTrap(), FragTrap(), NinjaTrap()
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

SuperTrap &    SuperTrap::operator=( SuperTrap const & rhs )
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

void    SuperTrap::rangedAttack(std::string const & target)
{
    return(FragTrap::rangedAttack(target));
}

void        SuperTrap::meleeAttack(std::string const & target)
{
    return(NinjaTrap::meleeAttack(target));
}

void		SuperTrap::vaulthunter_dot_exe(std::string const & target)
{
    return(FragTrap::vaulthunter_dot_exe(target));
}

void		SuperTrap::ninjaShoebox(const ScavTrap& target)
{
    return(NinjaTrap::ninjaShoebox(target));
}
void		SuperTrap::ninjaShoebox(const FragTrap& target)
{
    return(NinjaTrap::ninjaShoebox(target));
}

void		SuperTrap::ninjaShoebox(const NinjaTrap& target)
{
    return(NinjaTrap::ninjaShoebox(target));
}
