/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 13:47:23 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/14 11:46:22 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"


// std::string    changeme(std::string a)
// {
//     int ran = rand();
//     int nb = (ran % 62);
//     char c;
//     if (nb < 10)
//         c = nb + '0';
//     else if (nb < 36)
//         c = nb - 10 + 'A';
//     else
//         c = nb - 36 + 'a';
//     return (a += c);
// }

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
    // std::string a;
    // std::string b;

    // Data* serialize = new (std::nothrow) Data;
    // if (serialize == NULL)
    // {
    //     std::cout << "allocation failed" << std::endl;
    //     return (NULL);
    // }
    // for(int i = 0; i < 8; i++)
    //     a = changeme(a);
    // serialize->s1 = a;
    // serialize->n = rand();
    // for(int i = 0; i < 8; i++)
    //     b = changeme(b);
    // serialize->s2 = b;
    // std::cout << "We have randomly serialized: " << serialize->s1 << serialize->n << serialize->s2;
    // return (reinterpret_cast<void *>(serialize));
}

