/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 17:13:29 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:17:37 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "MyEnemy.hpp"
#include "MyWeapon.hpp"

int main()
{
    Character* me = new Character("me");
    std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	Character* you = new Character("you");
	std::cout << *you;
	Enemy* mi = new MyEnemy();
	AWeapon* mo = new MyWeapon();
	mi->takeDamage(10);
	you->equip(mo);
	std::cout << *you;
	Enemy* i = new RadScorpion();
	you->attack(i);
	delete mo;
	delete mi;
	std::cout << *you;
	you->recoverAP();
	std::cout << *you;
	return 0;
}
