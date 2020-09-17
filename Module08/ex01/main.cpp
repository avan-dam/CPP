/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:58:15 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/17 16:21:41 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
    span i(3);
    try {
        i.addNumber(4);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try {
        i.addNumber(90);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try {
        i.addNumber(-76);
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
}
