/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 16:33:31 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/09/03 12:52:43 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

int main()
{
	AMateria* sr = new Ice();
	AMateria* a = new Ice();
	AMateria* b = new Ice();
	AMateria* c = new Ice();
	AMateria* d = new Cure();

	ICharacter* bo = new Character("bo");
	sr->getXP();
	sr->use(*bo);
	sr->getXP();
	sr->getType();
	bo->equip(sr);
	bo->equip(a);
	bo->equip(b);
	bo->equip(c);
	bo->equip(d);
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
    delete me;
    delete src;
    return 0;
}
