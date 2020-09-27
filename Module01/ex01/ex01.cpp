/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:10:53 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/26 18:37:16 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
    std::string* panther = new std::string("String panther");
    std::cout << *panther << std::endl;
    delete panther;
}

// int main()
// {
//     memoryLeak();
//     system("leaks executable.out");
//     return (0);
// }
