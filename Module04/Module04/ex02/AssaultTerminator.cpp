/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 16:33:26 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/19 16:22:56 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
    return ;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back..." << std::endl;
    return ;
}
AssaultTerminator::AssaultTerminator( const AssaultTerminator & src )
{
    *this = src;
    return ;
}

AssaultTerminator &    AssaultTerminator::operator=(  const AssaultTerminator & rhs )
{
    (void)rhs;
    return *this;
}

ISpaceMarine* AssaultTerminator::clone() const
{
    ISpaceMarine* newmarine = new AssaultTerminator();
    *newmarine = *this;
    return (newmarine);
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
    return ;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
    return ;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" <<std::endl;
    return ;
}
