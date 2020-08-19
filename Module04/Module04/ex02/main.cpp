/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 20:22:42 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:21:06 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"


int main()
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
return 0;
}
