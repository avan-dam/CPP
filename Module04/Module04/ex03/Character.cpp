/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 18:17:38 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/09/04 13:14:57 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name)
{
    this->_name = name;
    this->_MyMateria = new AMateria*[4];
    memset(this->_MyMateria, 0, 5);
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

Character::Character( const Character & src )
{
    this->_count = src._count;
    this->_name = src._name;
    for (int i = 0; i < this->_count; i++)
        this->_MyMateria[i] = src._MyMateria[i]->clone();
    return;

}        

Character &   Character::operator=(  const Character & rhs )
{
    this->_count = rhs._count;
    this->_name = rhs._name;
    for (int i = 0; i <= this->_count; i++)
        delete this->_MyMateria[i];
    delete [] this->_MyMateria;
    this->_MyMateria = new AMateria*[4];
    for (int i = 0; i < this->_count; i++)
        this->_MyMateria[i] = rhs._MyMateria[i]->clone();
    return *this;
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    if (this->_count >= 4)
    {
        std::cout << "full" <<std::endl;
        return ;
    }
    this->_MyMateria[this->_count] = m->clone();
    this->_count = this->_count + 1;
    std::cout << this->_name << " equiped with type " << m->getType() <<std::endl;
    return ;
}

void Character::unequip(int idx)
{
    if (idx >=0 && idx < this->_count)
        this->_MyMateria[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > this->_count)
        return ;
    this->_MyMateria[idx]->use(target);
    return ;
}
