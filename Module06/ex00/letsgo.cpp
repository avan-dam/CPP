/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   letsgo.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 17:13:02 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/21 16:40:52 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void        letsgodouble(char* s)
{
    if (strcmp(s, "-inf") == 0 || strcmp(s, "+inf") == 0 || strcmp(s, "inf") == 0 || strcmp(s, "nan") == 0)
        return (letsgobig(s, 'd'));
    std::cout.precision(1);
    long longy = atol(s);
    std::cout.precision(1);
    if (longy < -DBL_MAX || longy > DBL_MAX)
        return (letsgolong(longy));
    double d = std::atof(s);
    if ((d < 32) || (d > 126 && d <= 255))
        std::cout << "char: Non displayable" << std::endl;
    else if (d > 255)
        std::cout << "char: impossible" << std::endl;
    else 
    {
        char c = static_cast<char>(d);
        std::cout << "char: '" << std::fixed << c << "'"<< std::endl;
    }
    int i = static_cast<int>(d);
    std::cout << "int: " << std::fixed << i << std::endl;
    float f = static_cast<float>(d);
    std::cout << "float: " << std::fixed << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << d << std::endl;
    return ;
}

void    letsgochar(char* s)
{
    std::cout.precision(1);
    char c = s[0];
    std::cout << "char: '" << std::fixed << c << "'"<< std::endl;
    int i = static_cast<int>(c);
    std::cout << "int: " << std::fixed << i << std::endl;
    float f = static_cast<float>(c);
    std::cout << "float: " << std::fixed << f << "f" << std::endl;
    double d = static_cast<double>(c);
    std::cout << "double: " << std::fixed << d << std::endl;
    return ;
}

void    letsgolong(long longy)
{
    std::cout.precision(1);
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (longy < -FLT_MAX || longy > FLT_MAX)
        std::cout << "float: impossible" << std::endl;
    else
    {   
        float f = static_cast<float>(longy);
        std::cout << "float: " << std::fixed << f << "f" << std::endl;
    }
    if (longy < -DBL_MAX || longy > DBL_MAX)
        std::cout << "double: impossible" << std::endl;
    else
    {   
        double d = static_cast<double>(longy);
        std::cout << "double: " << std::fixed << d << std::endl;
    }
    return ;
}

void    letsgoint(char* s)
{
    long longy = atol(s);
    std::cout.precision(1);
    if (longy > INT_MAX || longy < INT_MIN)
        return (letsgolong(longy));
    int i = std::atoi(s);
    if ((i < 32) || (i > 126 && i <= 255))
        std::cout << "char: Non displayable" << std::endl;
    else if (i > 255)
        std::cout << "char: impossible" << std::endl;
    else 
    {
        char c = static_cast<char>(i);
        std::cout << "char: '" << std::fixed << c << "'"<< std::endl;
    }
    std::cout << "int: " << std::fixed << i << std::endl;
    float f = static_cast<float>(i);
    std::cout << "float: " << std::fixed << f << "f" << std::endl;
    double d = static_cast<double>(i);
    std::cout << "double: " << std::fixed << d << std::endl;
    return ;
}
    
void    letsgofloat(char* s)
{
    if (strcmp(s, "-inff") == 0 || strcmp(s, "+inff") == 0 || strcmp(s, "inff") == 0 || strcmp(s, "nanf") == 0)
       return (letsgobig(s, 'f'));
    long longy = atol(s);
    std::cout.precision(1);
    if (longy < -FLT_MAX || longy > FLT_MAX)
        return (letsgolong(longy));
    std::cout.precision(1);
    float f = std::atof(s);
    if ((f < 32) || (f > 126 && f <= 255))
        std::cout << "char: Non displayable" << std::endl;
    else if (f > 255)
        std::cout << "char: impossible" << std::endl;
    else 
    {
        char c = static_cast<char>(f);
        std::cout << "char: '" << std::fixed << c << "'"<< std::endl;
    }
    int i = static_cast<int>(f);
    std::cout << "int: " << std::fixed << i << std::endl;
    double d = static_cast<double>(f);
    std::cout << "float: " << std::fixed << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << d << std::endl;
    return ;
}

void    letsgobig(char * s, char c)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (c == 'f')
    {
        std::string temp = s;
        std::cout << "float: " << s << std::endl;
        std::cout << "double: " << temp.substr(0, strlen(s) - 1) <<std::endl;
    }
    else if (c == 'd')
    {
        std::cout << "float: " << s << "f" << std::endl;
        std::cout << "double: " << s <<std::endl;
    }
    return ;
}
