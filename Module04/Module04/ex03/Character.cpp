/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 18:17:38 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/19 18:44:46 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
    this->_name = name;
    this->_MyMateria = new AMateria*[4];
    // do i have to make a new array here 
    this->_MyMateria = NULL;
    this->_count = 0;
    return;
}

Character::~Character()
{
    for (int i = 0; i < this->_count; i++)
    {
        delete this->_MyMateria[i];
    }
    delete [] this->_MyMateria;
}

	// 	Character( const Character & src );
	// 	Character &    operator=(  const Character & rhs );

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    if (this->_count >= 4)
        return ;
    this->_MyMateria[this->_count] = m;
    this->_count = this->_count + 1;
    return ;
}

void Character::unequip(int idx)
{
    if (idx > this->_count)
        return ;
    this->_MyMateria[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > this->_count)
        return ;
    this->_MyMateria[idx].use(target);
    return ;
}
