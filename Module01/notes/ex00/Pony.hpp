/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 14:10:33 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/07/30 15:58:17 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <string.h>
#include <iostream>

void    ponyOnTheHeap();
void    ponyOnTheStack();


class Pony
{
    private:
        std::string _colour;
        std::string _breed;
        std::string _playfulness;

    public:
        Pony(std::string _colour, std::string _breed, std::string _playfulness);
        ~Pony(void);
};

#endif
