/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 13:46:45 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/27 11:59:34 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void function()
{
    srand((unsigned) time(0));
    void * v = serialize();
    Data* d = deserialize(v);
    delete static_cast<char *>(v);
    std::cout << "We have deserialized: " << d->s1 << d->n << d->s2;
    delete d;
}

int main(void)
{
    function();
    // system("leaks ex01");
    return(0);
}
