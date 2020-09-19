/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:58:15 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/18 16:29:24 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void        theirmain()
{
    Span sp = Span(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void    mysmallmain()
{
        Span i(3);
    try {
        i.addNumber(0);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try {
        i.addNumber(-4);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try {
        i.addNumber(-176);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }
    try {
        i.addNumber(4);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try {
        std::cout << i.longestSpan() << std::endl;
    }
        catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }
    try {
        std::cout << i.shortestSpan() << std::endl;
    }
        catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }
}

void    mybigmain()
{
    unsigned int    size;
    size = rand();
    Span sp = Span(size);
    // auto numbers = std::vector<int>(sp->_N);
    // std::list<Span>::iterator it;
    // int index = 0;
    // for (it = sp.begin(); it != sp.end(); it++)
    // {
    //     it->_N[index] = rand();
    //     index++;
    // }
}


int     main(void)
{
    srand((unsigned) time(0));
    theirmain();
    mysmallmain();
    mybigmain();
    return 0;
}
