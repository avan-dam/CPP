/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checks.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 17:06:54 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/17 17:25:05 by Amber         ########   odam.nl         */
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
    if (strcmp(s, "-inff") == 0 || strcmp(s, "+inff") || strcmp(s, "inff") || strcmp(s, "nanf"))
        return 1;
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
    if (strcmp(s, "-inf") == 0 || strcmp(s, "+inf") == 0 || strcmp(s, "inf") == 0 || strcmp(s, "nan") == 0)
        return (1);
    int len = strlen(s);
    for(int i = 0; i < len; i++)
    {
        if ((s[i] < '0' || s[i] > '9') && s[i] != '.' && s[i] != '-')
            return (0);
    }
    return (1);
}
