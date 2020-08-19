/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 13:27:31 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/11 16:05:16 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
    this->_hitpoints = 60;
    this->_maxhitpoints = 60;
    this->_energypoints = 120;
    this->_maxenergypoints = 120;
    this->_meleeattackdamage = 60;
    this->_rangedattackdamage = 5;
    this->_armordamagereduction = 0;
    std::cout << "I am a NINJATRAP called " << this->_name << "with" << _energypoints << " energypoints and";
    std::cout << " max energy of " << this->_maxenergypoints << "and hit points of " << this->_hitpoints << " and max hit points of ";
    std::cout << this->_maxenergypoints << " on level " << this->_level << " and melee attack damage of " << this->_meleeattackdamage;
    std::cout << " ranged attack damage of " << this->_rangedattackdamage << "and armor damage reduction of ";
    std::cout << this->_armordamagereduction << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout <<"Away with thee! Me NINJATRAP called " << this->_name << " died" << std::endl;
    return ;
}

void	NinjaTrap::ninjaShoebox(const ScavTrap& target)
{    
    std::cout << "Ah I found a random CLAPTRAP called " << target.getName() << std::endl;
    return ;
}

void	NinjaTrap::ninjaShoebox(const FragTrap& target)
{    
    std::cout << "Ah I found a random FRAGTRAP called " << target.getName() << std::endl;
    return ;
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap& target)
{    
    std::cout << "Ah I found a random NINJATRAP called " << target.getName() << std::endl;
    return ;
}