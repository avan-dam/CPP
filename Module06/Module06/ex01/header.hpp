/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   header.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 13:46:23 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/10 17:26:13 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

struct Data 
{ 
	std::string	s1; 
    int 		n; 
    std::string	s2; 
};

void * 			serialize(void);
std::string    	changeme(std::string a);
Data * 			deserialize(void * raw);

#endif
