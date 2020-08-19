/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 13:42:12 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/12 17:47:45 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{}

Sorcerer::Sorcerer(const std::string name, const std::string title)
{
	this->_name = name;
	this->_title = title;
	std::cout << name << ", " << title << " is born!" << std::endl;
	return ;
}

Sorcerer::Sorcerer( Sorcerer const & src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << " is dead. Consequences will never be the same!";
	return ;
}

Sorcerer &    Sorcerer::operator=( Sorcerer const & rhs )
{
    std::cout << "Assignment operator called" << std::endl;
    if ( this != &rhs )
        this->_name = rhs._title;
		this->_title = rhs._name;
    return *this;
}

std::string     Sorcerer::getName() const
{
	return (this->_name);
}

std::string     Sorcerer::getTitle() const
{
	return (this->_title);
}

void Sorcerer::polymorph(Victim const & viccy) const
{
    std::cout << viccy.getName() << " has been turned into a cute little sheep!" << std::endl;
}

void Sorcerer::polymorph(Peon const & viccy) const
{
    std::cout << viccy.getName() << " has been turned into a pink pony!" << std::endl;
}

std::ostream &  operator<<(std::ostream & o, Sorcerer const & i )
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies!" << std::endl;
    return o;
}
