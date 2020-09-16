//in this example outputs every element of my collection.
//it is a collection of ints so i will make a function taking an int

#include <iostream>
#include <algorithm>
#include <list>

void displayInt(int i)
{
    std::cout << i << std::endl;
}

int main()
{
    std::list<int> lst;

    lst.push_back(10);
    lst.push_back(23);
    lst.push_back(3);
    lst.push_back(17);
    lst.push_back(20);
    
    for_each(lst.begin(), lst.end(), displayInt);
    return (0);
}