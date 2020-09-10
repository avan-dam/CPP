/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 13:47:23 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/10 22:09:36 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"


std::string    changeme(std::string a)
{
    int ran = rand();
    int nb = (ran % 62);
    char c;
    if (nb < 10)
        c = nb + '0';
    else if (nb < 36)
        c = nb - 10 + 'A';
    else
        c = nb - 36 + 'a';
    return (a += c);
}

void * serialize(void)
{
    std::string a;
    std::string b;

    Data* serialize = new (std::nothrow) Data;
    if (serialize == NULL)
    {
        std::cout << "allocation failed" << std::endl;
        return (NULL);
    }
    for(int i = 0; i < 8; i++)
        a = changeme(a);
    for(int i = 0; i < 8; i++)
        b = changeme(b);
    serialize->s1 = a;
    serialize->n = rand();
    serialize->s2 = b;
    std::cout << "We have randomly serialized: " << serialize->s1;
    std::cout << serialize->n << serialize->s2 << std::endl;
    return (reinterpret_cast<void *>(serialize));
}
