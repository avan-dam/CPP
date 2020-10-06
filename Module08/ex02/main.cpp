/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 12:09:25 by Amber         #+#    #+#                 */
/*   Updated: 2020/10/06 17:12:46 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>
#include <algorithm>

void    theirmain()
{
    std::cout << "Their main" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "5 is pushed and then 17" << std::endl;
    std::cout << "so .top() will give us the top value of: " <<mstack.top() << std::endl;
    mstack.pop();
    std::cout<< "just poped so now the size is" << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << "3 is pushed and then 5 and then 737 and then 0" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "now loop through the iterator printing all values inside" << std::endl;
    while (it != ite)
    {
        std::cout << "[" << *it << "]";
        ++it;
    }   

    MutantStack<int> k(mstack);
    std::cout << std::endl << "then that mutant stack was copied and now lets check all the values are the same";
    MutantStack<int>::iterator itt = k.begin();
    MutantStack<int>::iterator itte = k.end();
    ++itt;
    --itt;
    std::cout << "now loop through the iterator printing all values inside" << std::endl;
    while (itt != itte)
    {
        std::cout << "[" << *itt << "]";
        ++itt;
    }   
    std::cout << std::endl;
    std::stack<int> s(mstack);
    std::cout << "The stack is : ";
    while (!s.empty())
    {
        std::cout << ' ' << s.top();
        s.pop();
    }
    std::cout << std::endl;
}

void    mymain()
{
    std::cout << "My main:" << std::endl;
    MutantStack<float> yay;
    std::cout << "constructor works!" << std::endl;
    yay.push(7.1f);
    yay.push(77.2f);
    yay.push(777.3f);
    std::cout << "push works, pushed 7.0f and 77.0f and 777.0f!" << std::endl;
    std::cout << "top works and gives us: " << yay.top() << std::endl;
    std::cout << "empty works and gives us: " << std::boolalpha<<  yay.empty() << std::endl;
    std::cout << "size works and gives us: " << yay.size() << std::endl;
    std::cout << "all elements of yay are" << std::endl;
    MutantStack<float>::iterator itt = yay.begin();
    MutantStack<float>::iterator itte = yay.end();
    while (itt != itte)
    {
        std::cout << "[" << *itt << "]";
        ++itt;
    }   
    std::cout << std::endl;
    MutantStack<float> yay2 = yay;
    std::cout << "Assignment operator works!" << std::endl;
    yay2.pop();
    std::cout << "pop works. And now for printing what is left in yay2" << std::endl;
    MutantStack<float>::iterator it = yay2.begin();
    MutantStack<float>::iterator ite = yay2.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "[" << *it << "]";
        ++it;
    }    


}

int main()
{
    theirmain();
    mymain();
    return 0;
}
