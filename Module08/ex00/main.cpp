/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 08:23:15 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/17 14:55:53 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char*            notInlist::what() const throw()
{
    return "Not in me list";
}  

template <typename T>
int easyfind(int i, T lst)
{
    int index = 0;
    for (typename T::const_iterator it = lst.begin(); it != lst.end(); ++it)
    {
        if(*it == i)
            return index;
        index++;
    }
    throw notInlist();
    return 0;    
}

void     testing_list()
{
    std::list<int> lst;

    lst.push_back(10);
    lst.push_back(23);
    lst.push_back(3);
    lst.push_back(17);
    lst.push_back(20);

    try {
        easyfind(17, lst);
        std::cout << "Number 20 is in my list" << std::endl;
        std::cout << "At index " << easyfind(17, lst) << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Number 10 is: " << e.what() << std::endl; 
    }
    try {
        easyfind(9, lst);
        std::cout << "Number 9 is in my list" << std::endl;
        std::cout << "At index " << easyfind(9, lst) << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Number 9 is: " << e.what() << std::endl; 
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
        easyfind(50, v1);
        std::cout << "Number 50 is in my list" << std::endl;
        std::cout << "At index " << easyfind(50, v1) << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Number 10 is: " << e.what() << std::endl; 
    }
    try {
        easyfind(9, v1);
        std::cout << "Number 9 is in my list" << std::endl;
        std::cout << "At index " << easyfind(9, v1) << std::endl;
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
