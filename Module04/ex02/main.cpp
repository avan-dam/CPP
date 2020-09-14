/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 20:22:42 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/04 12:05:10 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"

void their_main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
}

void    my_main()
{
    Squad* me = new Squad;
    ISpaceMarine* bobby = new TacticalMarine;
    std::cout << me->getCount() << std::endl;
    me->push(bobby);
    std::cout << me->getCount() << std::endl;
    delete me;
}


int main()
{
    their_main();
    my_main();
    return 0;
}
