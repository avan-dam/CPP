/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:48:25 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/26 18:42:28 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << "ANNOUNCING ZOOOMBIE of type " << "" << this->_type << " called " << this->_name << " has Braiiiiiiinnnssss..." << std::endl;
    return ;
}

Zombie::Zombie(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
    return ;
}
Zombie::Zombie()
{
    return ;
}

void Zombie::setmezombie(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
    return ;
}

Zombie::~Zombie()
{
    std::cout << "ZOOOMBIE of type " << "" << this->_type << " called " << this->_name << " has BEEN DESTROYED..." << std::endl;
    return ;
}
