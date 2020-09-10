/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 13:46:45 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/10 17:24:40 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(void)
{
    srand((unsigned) time(0));
    void * v = serialize();
    Data* whatIhave = new (std::nothrow) Data;
    whatIhave = deserialize(v);
    std::cout << "We have deserialized: " << whatIhave->s1 << whatIhave->n << whatIhave->s2;
    std::cout << " with address: " << whatIhave << std::endl;
    return(0);
}
