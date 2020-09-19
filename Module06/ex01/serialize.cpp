/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 13:47:23 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/19 16:16:05 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

char    changeme(int n)
{
    int nb = n % 62;
    char c;
    if (nb < 10)
        c = nb + '0';
    else if (nb < 36)
        c = nb - 10 + 'A';
    else
        c = nb - 36 + 'a';
    return (c);
}

void * serialize(void)
{
    char *serialize = new char[20];
    std::cout << "We have serialized: ";
    for(int i = 0; i < 8; i++)
    {
        serialize[i] = changeme(rand());
        std::cout << serialize[i];
    }
    int n = rand();
    *(reinterpret_cast<int *>(&serialize[8])) = n;
    std::cout << n;
    for(int i = 0; i < 8; i++)
    {
        serialize[i + 12] = changeme(rand());
        std::cout << serialize[i + 12];
    }
    std::cout << std::endl;
    return (static_cast<void *>(serialize));
}

