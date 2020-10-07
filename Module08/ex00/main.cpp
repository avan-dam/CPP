/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 08:23:15 by Amber         #+#    #+#                 */
/*   Updated: 2020/10/07 11:28:52 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void     testing_list()
{
    std::list<int> lst;

    lst.push_back(10);
    lst.push_back(23);
    lst.push_back(3);
    lst.push_back(17);
    lst.push_back(20);

    try {
        std::list<int>::iterator found = easyfind(17, lst);
        std::cout << "Element found: " << *found << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Number 17 is: " << e.what() << std::endl; 
    }
    try {
        std::list<int>::iterator found = easyfind(220, lst);
        std::cout << "Element found: " << *found << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Number 220 is " << e.what() << std::endl; 
    }
}

void    testing_vector()
{
    std::vector<int>        v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(50);
    try {
        std::vector<int>::iterator found = easyfind(50, v1);
        std::cout << "Element found: " << *found << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Number 50 is: " << e.what() << std::endl; 
    }
    try {
        std::vector<int>::iterator found = easyfind(9, v1);
        std::cout << "Element found: " << *found << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Number 9 is: " << e.what() << std::endl; 
    }
}

int main()
{
    testing_list();
    testing_vector();
    return (0);
}
