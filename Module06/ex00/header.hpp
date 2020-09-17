/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   header.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 17:07:52 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/17 17:24:58 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cstring>
#include <cstdlib>

int     checkifchar(char* s);
int     checkiffloat(char* s);
int     checkifint(char* s);
int     checkifdouble(char* s);
int    letsgodouble(char* s);
void    letsgochar(char* s);
void    letsgoint(char* s);
int     letsgofloat(char* s);
int    letsgobig(int i);

#endif
