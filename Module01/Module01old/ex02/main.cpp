/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:53:30 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/26 18:42:41 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int    main(void)
{
    Zombie normal("namey", "typey");
    normal.announce();
    ZombieEvent Event;
    Event.setZombieType("green");
    Zombie *Zoom = Event.newZombie("Amber");
    Zoom->announce();
    srand((unsigned) time(0));
    Zombie* RandomZomb1 = Event.randomChump("piglet");
    Zombie* RandomZomb2 = Event.randomChump("piglet");
    delete Zoom;
    delete RandomZomb1;
    delete RandomZomb2;
        // system("leaks executable.out");
    return (0);
}
