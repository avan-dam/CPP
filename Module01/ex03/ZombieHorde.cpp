/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 16:15:42 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/02 10:25:56 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
    Zombie* Zoom = new Zombie[N];
    this->_numb = N;
    std::string name;
    int i = 0;
    while(i < N)
    {
        int rannb = rand();
        name = this->randomChump(rannb);
        Zoom[i].setmezombie(name, "randomzomb");
        i++;
    }
    this->_Zombies = Zoom;
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->_Zombies;
}

void    ZombieHorde::announce(void)
{
    int i = 0;
    while (i < this->_numb)
    {
        this->_Zombies[i].announce();
        i++;
    }
}

std::string    ZombieHorde::randomChump(int rannb)
{
    std::string name;
    int nb = (rannb % 8);
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
    return(name);
}
