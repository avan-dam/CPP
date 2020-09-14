/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   header.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 17:07:52 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/10 13:45:18 by Amber         ########   odam.nl         */
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
void    letsgodouble(char* s);
int     checkbigones(std::string s);
void    letsgochar(char* s);
void    letsgoint(char* s);
void    letsgofloat(char* s);
void    letsgobig(int i);

#endif
