/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   identify.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 22:40:16 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/12 11:55:01 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void identify_from_pointer(Base * p)
{
    A *a = dynamic_cast<A *>(p);
    if (a != NULL)
        std::cout << "A" <<std::endl;
    B *b = dynamic_cast<B *>(p);
    if (b != NULL)
        std::cout << "B" <<std::endl;
    C *c = dynamic_cast<C *>(p);
    if (c != NULL)
        std::cout << "C" <<std::endl;
}

void identify_from_reference( Base & p)
{
        try {
        A & a = dynamic_cast<A &>(p);
        std::cout << "A" << ::std::endl;
        (void)a;
    }
    catch ( std::bad_cast &bc) {
    }
        try {
        B & b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
            (void)b;
    }
    catch ( std::bad_cast &bc) {
    }
        try {
        C & c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        (void)c;
    }
    catch ( std::bad_cast &bc) {
    }
}
