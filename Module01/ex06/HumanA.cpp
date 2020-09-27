/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:31:41 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/27 11:31:39 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponA) : _weapon(weaponA), _name(name)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
