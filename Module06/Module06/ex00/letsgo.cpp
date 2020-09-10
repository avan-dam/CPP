/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   letsgo.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 17:13:02 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/10 13:44:10 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void        letsgodouble(char* s)
{
    std::cout.precision(1);
    double d = std::atof(s);
    if ((d < 32 || d > 126) || (d >= 0 && d <= 9))
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
    return;
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

void    letsgoint(char* s)
{
    std::cout.precision(1);
    int i = std::atoi(s);
    if ((i < 32 || i > 126) || (i >= 0 && i <= 9))
        std::cout << "char: Non displayable" << std::endl;
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
    std::cout.precision(1);
    float f = std::atof(s);
    if ((f < 32 || f > 126) || (f >= 0 && f <= 9))
        std::cout << "char: Non displayable" << std::endl;
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

void    letsgobig(int i)
{
    if (i == 1)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: inff" << std::endl;
        std::cout << "double: inf" << std::endl;
    }
    if (i == 2)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;  
    }
}






// void        letsgodouble(std::string s)
// {
//     std::cout.precision(1);
//     try {
//         double d = std::stod(s);
//         std::cout << "double: " << std::fixed << d << std::endl;
//         return ;
//     }
//     catch (std::exception& e) {
//         throw invalidImpossibleException();
//     }
// }

// void    letsgochar(char* s)
// {
//     if (s[0] >  '/' && s[0] < ':')
//         throw invalidNotDisplayableException();
//     if (strlen(s) != 1 || s[0] < '!' || s[0] > '~')
//         throw invalidImpossibleException();
//     char c = static_cast<char>(s[0]);
//     std::cout << "char: " << c << std::endl;
//     return ;
// }

// void    letsgoint(char* s)
// {
//     try {
//         int i = std::atoi(s);
//         std::cout << "int: " << i << std::endl;
//         return ;
//     }
//     catch (std::exception& e) {
//         throw invalidImpossibleException();
//     }
// }
    

// void    letsgofloat(char* s)
// {
//     std::cout.precision(1);
//     try {
//         float f = static_cast<float>(std::atof(s));
//         std::cout << "float: " << std::fixed << f << std::endl;
//     }
//     catch (std::exception& e) {
//         throw invalidImpossibleException();
//     }
// }
