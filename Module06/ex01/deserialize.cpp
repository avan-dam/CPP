/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   deserialize.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 16:34:28 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/21 16:28:53 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Data * deserialize(void * raw)
{
    std::string	s1 = "00000000\0";
	  std::string	s2 = "00000000\0";
    
    char *s = reinterpret_cast<char *>(raw);
	  for (int i = 0; i < 8; i++)
		s1[i] = s[i];     
    Data *deserialize = new Data;
    deserialize->s1 = s1;
    //jump the size of two ints : s1[0-3]raw s1[4-7]raw+1 s1[8-11]raw +2
    int n = *(static_cast<int*>(raw) + 2);
    deserialize->n = n;
    for (int i = 0; i < 8; i++)
		s2[i] = s[i + 12]; 
    deserialize->s2 = s2;
    return (deserialize);
}
