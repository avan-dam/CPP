/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 16:26:27 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/19 16:23:09 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
    return ;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." << std::endl;
    return ;
}
TacticalMarine::TacticalMarine( const TacticalMarine & src )
{
    *this = src;
    return ;
}

TacticalMarine &    TacticalMarine::operator=(  const TacticalMarine & rhs )
{
    (void)rhs;
    return *this;
}

ISpaceMarine* TacticalMarine::clone() const
{
    ISpaceMarine* newmarine = new TacticalMarine();
    *newmarine = *this;
    return (newmarine);
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!" << std::endl;
    return ;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
    return ;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" <<std::endl;
    return ;
}
