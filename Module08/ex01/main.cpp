/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:58:15 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/22 19:06:35 by avan-dam      ########   odam.nl         */
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
    std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "longest span: " << sp.longestSpan() << std::endl;
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
    std::vector<int> lst(100000, 42);
    // unsigned int    size = rand();
    Span sp = Span(100000);
    sp.addNumber<std::vector<int>::iterator>(lst.begin(), lst.end());
    sp.getmevector();
}


int     main(void)
{
    srand((unsigned) time(0));
    theirmain();
    mysmallmain();
    mybigmain();
    return 0;
}
