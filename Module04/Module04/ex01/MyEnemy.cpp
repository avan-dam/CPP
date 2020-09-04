/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MyEnemy.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 12:02:11 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/03 12:28:25 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MyEnemy.hpp"

MyEnemy::MyEnemy() : Enemy(80, "MyEnemy")
{
    std::cout << "* my enemy wooooo *" << std::endl;
    return ;
}
MyEnemy::~MyEnemy()
{
    std::cout << "* by to my enemy *" << std::endl;
    return ;
}

MyEnemy::MyEnemy( const MyEnemy & src ) : Enemy()
{
    *this = src;
    return;
}

MyEnemy &    MyEnemy::operator=(  const MyEnemy & rhs )
{
    if (this != &rhs)
    {
        this->_HP = rhs._HP;
        this->_type = rhs._type;
    }
    return *this;
}
