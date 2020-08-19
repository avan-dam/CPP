/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 13:42:05 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:14:33 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Zombo.hpp"

void    mytest()
{
    std::cout << std::endl << "MY TEST NOW:" << std::endl;
    Zombo zom("zom");
    std::cout << zom << std::endl;
    Sorcerer Michelle("Michelle", "woo");
    Michelle.polymorph(zom);
    return;
}

void    theirtest()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
}

int main()
{
    theirtest();
    mytest();
    return 0;
}
