/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 12:20:49 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/16 13:08:05 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T>
void       iter( T * array, size_t size, void (*f)(T)) {
    for (size_t i = 0; i < size; i++)
        f(array[i]);
    return ;
}

template< typename T>
void    printme(T array)
{
    std::cout << array << std::endl;
}

int main()
{
    std::cout << "Print string array:" << std::endl;
    std::string str[4] = {"this", "is", "me", "array"};
    iter(str, 4, printme); 
    std::cout << std::endl << "Print int array:" << std::endl;
    int intar[6] = {1, 2, 4, 5, 7, 8};
    iter(intar, 6, printme); 
}
