/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   header.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 13:46:23 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/19 15:39:31 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <stdlib.h>

struct Data 
{ 
	std::string	s1; 
    int 		n; 
    std::string	s2; 
};

void * 			serialize(void);
char        	changeme(int n);
Data * 			deserialize(void * raw);

#endif
