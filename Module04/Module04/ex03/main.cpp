/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 16:33:31 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/20 16:28:05 by Amber         ########   odam.nl         */
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
	AMateria* src = new Ice();
	AMateria* a = new Ice();
	AMateria* b = new Ice();
	AMateria* c = new Ice();
	AMateria* d = new Cure();

	ICharacter* bob = new Character("bob");
	src->getXP();
	src->use(*bob);
	src->getXP();
	src->getType();
	bob->equip(src);
	bob->equip(a);
	bob->equip(b);
	bob->equip(c);
	bob->equip(d);
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
    // delete me;
    delete src;
    return 0;
}
