/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   header.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 21:31:16 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/19 15:40:30 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <ctime>
#include <cstdlib>

class Base {
    public:
        virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *  generate(void);
void    identify_from_pointer(Base * p);
void    identify_from_reference( Base & p);

#endif
