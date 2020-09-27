/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 14:18:03 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/09/02 10:10:27 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string _colour, std::string _breed, std::string _playfulness) : _colour(_colour), _breed(_breed), _playfulness(_playfulness)
{
    std::cout << "My Pony is " << this->_colour << "." << std::endl;
    std::cout << "Its breed is " << this->_breed << std::endl;
    std::cout << "and it is " << this->_playfulness << " playful." << std::endl;
}

Pony::~Pony(void)
{
    std::cout << "Pony of is dead" << std::endl;
}

void ponyOnTheHeap()
{
    Pony* jimmy = new (std::nothrow) Pony("grey", "giant", "awsomely");
    if (jimmy == NULL)
    {
        std::cout << "allocation failed" << std::endl;
        return ;
    }
    delete jimmy;
}

void    ponyOnTheStack()
{
    Pony bobby = Pony("red", "shetland", "very");
}
