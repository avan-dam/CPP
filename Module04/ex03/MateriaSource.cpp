/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 11:10:33 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/20 16:28:54 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() 
{
    this->_MyMateria = new AMateria*[4];
    memset(this->_MyMateria, 0, 5);
    this->_count = 0;
    return ;
}

MateriaSource::~MateriaSource() 
{
    for (int i = 0; i < this->_count; i++)
    {
        delete this->_MyMateria[i];
    }
    delete [] this->_MyMateria;
    return ;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
    this->_count = src._count;
    for (int i = 0; i < this->_count; i++)
        this->_MyMateria[i] = src._MyMateria[i]->clone();
    return;

}        

MateriaSource &   MateriaSource::operator=(  const MateriaSource & rhs )
{
    this->_count = rhs._count;
    for (int i = 0; i <= this->_count; i++)
        delete this->_MyMateria[i];
    delete [] this->_MyMateria;
    this->_MyMateria = new AMateria*[4];
    for (int i = 0; i < this->_count; i++)
        this->_MyMateria[i] = rhs._MyMateria[i]->clone();
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (this->_count >= 4 || m == NULL)
        return ;
    this->_MyMateria[this->_count] = m;
    this->_count++;
    return ;
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < this->_count; i++) 
    {
        if (this->_MyMateria[i]->getType() == type)
            return this->_MyMateria[i]->clone();
    }
    return NULL;

}
