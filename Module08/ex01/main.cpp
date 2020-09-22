/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:58:15 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/22 23:03:19 by Amber         ########   odam.nl         */
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
    std::cout << sp << std::endl;
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
    std::cout << i << std::endl;
}

void    mybigmain()
{
    std::vector<int> lst(100000, 42);
    Span sp(100000);
    sp.addNumber<std::vector<int>::iterator>(lst.begin(), lst.end());
    // std::cout << sp << std::endl;
    Span sp2 = Span(100000 - 1);
    try {
        sp2.addNumber<std::vector<int>::iterator>(lst.begin(), lst.end());
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }
}


int     main(void)
{
    srand((unsigned) time(0));
    theirmain();
    mysmallmain();
    mybigmain();
    return 0;
}
