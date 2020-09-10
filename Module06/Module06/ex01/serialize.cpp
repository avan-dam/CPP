/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 13:47:23 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/10 17:24:11 by Amber         ########   odam.nl         */
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
    Data* serialize = new (std::nothrow) Data;
    if (serialize == NULL)
    {
        std::cout << "allocation failed" << std::endl;
        return (NULL);
    }
    std::string a;
    for(int i = 0; i < 8; i++)
        a = changeme(a);
    serialize->s1 = a;
    serialize->n = rand();
    std::string b;
    for(int i = 0; i < 8; i++)
        b = changeme(b);
    serialize->s2 = b;
    std::cout << "We have randomly serialized: " << serialize->s1 << serialize->n << serialize->s2;
    void * v = reinterpret_cast<void *>(serialize);    
    std::cout << " with address: " << v << std::endl;
    return (v);
}

