/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:18:06 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/09/16 14:11:35 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout << "wrong amount of arguments" << std::endl;
    else if (checkifchar(argv[1]) == 1)
        letsgochar(argv[1]);
    else if (checkiffloat(argv[1]) == 1)
        letsgofloat(argv[1]);
    else if (checkifint(argv[1]) == 1)
        letsgoint(argv[1]);
    else if (checkifdouble(argv[1]) == 1)
        letsgodouble(argv[1]);
    else if (checkbigones(argv[1]) == 1 || checkbigones(argv[1]) == 2)
        letsgobig(checkbigones(argv[1]));
    else
        std::cout << "not a valid input" << std::endl;
    return (0);
}
