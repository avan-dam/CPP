/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checks.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 17:06:54 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/16 13:33:25 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int checkifchar(char* s)
{
    if ((s[0] >  '/' && s[0] < ':') || strlen(s) != 1 || s[0] < '!' || s[0] > '~')
        return (0);
    return (1);
}

int checkiffloat(char* s)
{
    int len = strlen(s);
    int p = 0;
    if (s[len - 1] != 'f')
        return (0);
    for(int i = 0; i < len - 1; i++)
    {
        if ((s[i] == 'f') || ((s[i] < '0' || s[i] > '9') && s[i] != '-' && s[i] != '.'))
            return (0);
        if (s[i] == '.')
            p = 1;
    }
    if (len == 1 || p == 0)
        return (0);
    return (1);
}

int checkifint(char* s)
{
    int len = strlen(s);
    for(int i = 0; i < len; i++)
    {
        if ((s[i] < '0' || s[i] > '9') && s[i] != '-')
            return (0);
    }
    return (1);
}

int checkifdouble(char* s)
{
    int len = strlen(s);
    for(int i = 0; i < len; i++)
    {
        if ((s[i] < '0' || s[i] > '9') && s[i] != '.' && s[i] != '-')
            return (0);
    }
    return (1);
}

int checkbigones(std::string s)
{
    if (s == "-inff" || s == "+inff" || s == "inff" || s == "-inf" || s == "+inf" || s == "inf")
        return(1);
    if (s == "nanf" || s == "nan")
        return (2);
    return (0);
}
