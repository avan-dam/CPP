/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 16:19:44 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/02 10:28:39 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
    srand((unsigned) time(0));
    ZombieHorde Zoomers(5);
    Zoomers.announce();
            // system("leaks executable.out");
}
