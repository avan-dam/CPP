/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 21:35:11 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/27 11:10:33 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int main()
{
    Human bob;
    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
}
