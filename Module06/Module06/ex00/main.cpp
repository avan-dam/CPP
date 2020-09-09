/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:18:06 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/09/09 18:01:45 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout << "wrong amount of arguments" << std::endl;
    else if (checkifchar(argv[1]) == 1)
        letsgochar(argv[1]);
        // std::cout << "I have a char" << std::endl;
    else if (checkiffloat(argv[1]) == 1)
        letsgofloat(argv[1]);
        // std::cout << "I have a float" << std::endl;
    else if (checkifint(argv[1]) == 1)
        letsgoint(argv[1]);
        // std::cout << "I have an int" << std::endl;
    else if (checkifdouble(argv[1]) == 1)
        letsgodouble(argv[1]);
        // std::cout << "I have a double" << std::endl;
    else if (checkbigones(argv[1]) == 1 || checkbigones(argv[1]) == 2)
        letsgobig(checkbigones(argv[1]));
        // std::cout << "I have an inf/nan" << std::endl;
    else
        std::cout << "not a valid output" << std::endl;
    return (0);
}
