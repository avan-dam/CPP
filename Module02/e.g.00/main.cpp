/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 11:46:05 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/05 12:04:24 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sample.class.hpp"

int main( void )
{
    float z = 3.14;
    char c = 'a';
    int i = 42;
    Sample me;
    me.bar(c);
    me.bar(i);
    me.bar(z);
    me.bar(me);
    return (0);
}