/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:58:15 by Amber         #+#    #+#                 */
/*   Updated: 2020/10/06 14:55:50 by Amber         ########   odam.nl         */
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
        std::cout << "0 added" << std::endl;
        i.addNumber(-4);
        std::cout << "-4 added" << std::endl;
        i.addNumber(-176);
        std::cout << "-176 added" << std::endl;
        i.addNumber(4);
        std::cout << "4 added" << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Longest span is: " << i.longestSpan() << std::endl;
    std::cout << "shortest span is: " << i.shortestSpan() << std::endl;
    std::cout << i << std::endl;
}

void    mybigmain()
{
    std::vector<int> lst(100000, 42);
    Span sp(100000);
    sp.addNumber<std::vector<int>::iterator>(lst.begin(), lst.end());
    try {
        std::cout << sp.getmeN(100000) << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }
    try {
        std::cout << sp.getmeN(100) << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }
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
    // theirmain();
    // mysmallmain();
    // mybigmain();
    return 0;
}
