/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:53:25 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/27 09:57:48 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include "Zombie.hpp"

class ZombieHorde {
private:
    Zombie* _Zombies;
    int     _numb;
public:
	ZombieHorde(int N);
	~ZombieHorde( );
    void            announce();
    std::string     randomChump(int rannb);


};

#endif
