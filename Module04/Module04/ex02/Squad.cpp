/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 20:03:06 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 18:41:33 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"

int Squad::getCount() const
{
    return (this->_count);
}

ISpaceMarine* Squad::getUnit(int unit) const
{
    return this->_marine[unit];
}

int Squad::push(ISpaceMarine* marine)
{
    if (marine == NULL)
        return (this->_count);
    if (this->_count >=100)
    {
        std::cout << "too big no more space for u soz" << std::endl;
        return (this->_count);
    }
    for (int i = 0; i < this->_count; i++)
    {
        if (this->_marine[i] == marine)
            return (this->_count);
    }
    this->_marine[this->_count] = marine;
    this->_count = this->_count + 1;
    return (this->_count);
}

Squad::Squad( const Squad & src )
{
    // std::cout <<"copy" <<std::endl;
    this->_count = src._count;
    this->_marine = new ISpaceMarine*[100];
    for (int i = 0; i < this->_count; i++)
        this->_marine[i] = src._marine[i]->clone();
    return;
}

Squad &    Squad::operator=(  const Squad & rhs )
{
    std::cout <<"equal" <<std::endl;
    std::cout << "this " << this->_count << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i <= this->_count; i++)
            delete this->_marine[i];
        delete [] this->_marine;
        this->_marine = new ISpaceMarine*[100];
        for (int i = 0; i < this->_count; i++)
            this->_marine[i] = rhs._marine[i]->clone();
    }
    return *this;
}

Squad::~Squad()
{
    for (int i = 0; i < this->_count; i++)
    {
        delete this->_marine[i];
    }
    delete [] this->_marine;
}

Squad::Squad()
{
    this->_marine = new ISpaceMarine*[100];
    this->_count = 0;
    return;
}
