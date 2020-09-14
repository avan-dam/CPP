/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 13:46:45 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/14 11:46:40 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(void)
{
    srand((unsigned) time(0));
    void * v = serialize();
    Data* d = deserialize(v);
    delete static_cast<char *>(v);
    std::cout << "We have deserialized: " << d->s1 << d->n << d->s2;
    delete d;
    system("leaks convert");
    return(0);
}
