/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   generate.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 22:39:05 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/10 22:39:37 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

typedef Base* (*creatingbase) ();

Base* creatingA(){ A* basey = new A; return basey; }
Base* creatingB(){ B* basey = new B; return basey; }
Base* creatingC(){ C* basey = new C; return basey; }

Base * generate(void)
{
    int ran = rand();
    int nb = (ran % 3);
    creatingbase functions[] = 
    {
        creatingA,
        creatingB,
        creatingC
    };
    return (functions[nb]());
}
