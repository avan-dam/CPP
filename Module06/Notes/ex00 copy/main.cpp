/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:18:06 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/09/09 16:52:16 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <string> 
#include <iomanip>


class invalidNotDisplayableException : public std::exception {
 		public:
			virtual const char* what() const throw();
  	};
class invalidImpossibleException : public std::exception {
 		public:
			virtual const char* what() const throw();
  	};

const char*       invalidNotDisplayableException::what() const throw()
{
    return "Non displayable";
}

const char*       invalidImpossibleException::what() const throw()
{
    return "impossible";
}

void        letsgodouble(std::string s)
{
    std::cout.precision(1);
    try {
        double d = std::stod(s);
        std::cout << "double: " << std::fixed << d << std::endl;
        return ;
    }
    catch (std::exception& e) {
        throw invalidImpossibleException();
    }
}

void    letsgochar(char* s)
{
    if (s[0] >  '/' && s[0] < ':')
        throw invalidNotDisplayableException();
    if (strlen(s) != 1 || s[0] < '!' || s[0] > '~')
        throw invalidImpossibleException();
    char c = static_cast<char>(s[0]);
    std::cout << "char: " << c << std::endl;
    return ;
}

void    letsgoint(char* s)
{
    try {
        int i = std::atoi(s);
        std::cout << "int: " << i << std::endl;
        return ;
    }
    catch (std::exception& e) {
        throw invalidImpossibleException();
    }
}
    

void    letsgofloat(char* s)
{
    std::cout.precision(1);
    try {
        float f = static_cast<float>(std::atof(s));
        std::cout << "float: " << std::fixed << f << std::endl;
    }
    catch (std::exception& e) {
        throw invalidImpossibleException();
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "wrong amount of arguments" << std::endl;
        return (0);
    }
    std::cout << "argment: " << argv[1] << std::endl;
    try {
        letsgochar(argv[1]);
    }
    catch (std::exception& e) {
        std::cout << "char: ";
        std::cerr << e.what() << std::endl;    
    }
    try {
        letsgodouble(argv[1]);
    }
    catch (std::exception& e) {
        std::cout << "double: ";
        std::cerr << e.what() << std::endl;    
    }
    try {
        letsgoint(argv[1]);
    }
    catch (std::exception& e) {
        std::cout << "int: ";
        std::cerr << e.what() << std::endl;    
    }
    try {
        letsgofloat(argv[1]);
    }
    catch (std::exception& e) {
        std::cout << "float: ";
        std::cerr << e.what() << std::endl;    
    }
    return (0);
}


    // if (argc != 2)
    // {
    //     std::cout << "wrong amount of arguments" << std::endl;
    //     return (0);
    // }
    // if(((argv[1][0] >= '!' && argv[1][0] <=  '/') || (argv[1][0] >= ':' && argv[1][0] <=  '~'))  && strlen(argv[1]) == 1)
    // {
    //     char c = static_cast<char>(*argv[1]);
    //     std::cout << "char: " << c << std::endl;
    // }
    // else
    // {
    //     std::cout << "char: Non displayable" << std::endl;
    // }
    // std::cout << typeid(*argv[1]).name() << std::endl;


// void    findme(char c)
// {
//     std::cout << "in char" << c<< std::endl;
//     return ;
// }

// void   findme(int i)
// {
//     std::cout << "in int" << i << std::endl;
//     return ;
// }

// void    findme(std::string string)
// {
//     std::cout << "in string" << string << std::endl;
//     return ;
// }

// void    findme(float f)
// {
//     std::cout << "in float" << f << std::endl;
//     return ;
// }
// void    findme(double d)
// {
//     std::cout << "in double" << d << std::endl;
//     return ;
// }
