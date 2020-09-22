/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   header.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 17:07:52 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/22 15:08:29 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <limits>
#include <cfloat>
#include <iomanip>
#include <cmath>


int     checkifchar(char* s);
int     checkiffloat(char* s);
int     checkifint(char* s);
int     checkifdouble(char* s);
void    letsgodouble(char* s);
void    letsgochar(char* s);
void    letsgoint(char* s);
void    letsgofloat(char* s);
void    letsgobig(char * s, char c);
void    letsgolong(long double longy);

#endif
