/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/09 17:07:32 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/10 11:34:26 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

ScavTrap::ScavTrap(std::string name) : FragTrap(name)
{
    this->_energypoints = 50;
    this->_maxenergypoints = 50;
    this->_meleeattackdamage = 20;
    this->_rangedattackdamage = 15;
    this->_armordamagereduction = 3;
}

