/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 22:09:08 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/27 12:05:55 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Base::~Base()
{
    return ;
}

void    function()
{
    Base* B = generate();
    Base& me = *B;
    identify_from_pointer(B);
    identify_from_reference(me);
    delete B;
}

int main(void)
{
    srand((unsigned) time(0));
    function();
    // system("leaks convert");
    return (0);
}
