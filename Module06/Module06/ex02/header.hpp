/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   header.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 21:31:16 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/10 21:37:06 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

class Base {
    public:
        virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void);
void identify_from_pointer(Base * p);

#endif
