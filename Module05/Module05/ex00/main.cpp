/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 18:06:22 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/23 15:27:08 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat A("A", 150);
    std::cout << A << std::endl;
    A.decrementGrade();
    std::cout << A << std::endl;
    A.incrementGrade();
    std::cout << A << std::endl;
    A.incrementGrade();
    std::cout << A << std::endl;
    Bureaucrat B("B", 1);
    std::cout << B << std::endl;
    B.incrementGrade();
    std::cout << B << std::endl;
    B.decrementGrade();
    std::cout << B << std::endl;
    B.decrementGrade();
    std::cout << B << std::endl;
    return (0);
}
