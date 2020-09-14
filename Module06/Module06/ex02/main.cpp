/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 22:09:08 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/13 11:23:22 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Base::~Base()
{
    return ;
}

int main(void)
{
    srand((unsigned) time(0));
    Base* B = generate();
    Base& me = *B;
    identify_from_pointer(B);
    identify_from_reference(me);
    return (0);
}
