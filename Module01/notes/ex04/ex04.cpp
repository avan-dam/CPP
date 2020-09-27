/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 21:27:35 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/07 14:37:58 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    brain()
{
    std::string brian = "HI THIS IS BRAIN";
    std::string* brianPtr = &brian;
    std::string& brianRef = brian;
    
    std::cout  << *brianPtr << std::endl;
    std::cout << brianRef << std::endl;
}

int main(void)
{
    brain();
    return 0;
}
