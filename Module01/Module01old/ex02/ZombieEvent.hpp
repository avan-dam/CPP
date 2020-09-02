/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:48:25 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/26 18:38:37 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {

private:
    std::string _type;

public:

    void    setZombieType(std::string type);
    Zombie* newZombie(std::string name);
    Zombie* randomChump(std::string type);
};

#endif
