/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:53:20 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/26 18:38:34 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void    ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
    return ;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie* Zoom = new Zombie(name, this->_type);
    return (Zoom);
}

Zombie*    ZombieEvent::randomChump(std::string type)
{
    int ran = rand();
    std::string name;
    int nb = (ran % 8);
    if (nb == 0)
        name = "harrypotter";
    if (nb == 1)
        name = "fairyqueen";
    if (nb == 2)
        name = "beetroot";
    if (nb == 3)
        name = "hacksaw";
    if (nb == 4)
        name = "thor";
    if (nb == 5)
        name = "Mia";
    if (nb == 6)
        name = "rosie";
    if (nb == 7)
        name = "Jacob";
    if (nb == 8)
        name = "Alejandro";
    Zombie* RandomZomb = new Zombie(name, type);
    RandomZomb->announce();
    return(RandomZomb);
}
