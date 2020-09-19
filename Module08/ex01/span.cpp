/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:58:11 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/18 17:13:14 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N)
{
    this->_max = N;
    this->_count = 0;
}

Span::~Span()
{
    return ;
}

Span::Span( Span const & src )
{
    *this = src;
    return;
}

Span &    Span::operator=( Span const & rhs )
{
    if ( this != &rhs )
    {
        this->_max = rhs._max;
        this->_count = rhs._count;
        // for (int i=0; i<_N.size(); i++) 
        //     _N.push_back(vect1[i]); 
    }
    return *this;
}

const char*            Span::fullException::what() const throw()
{
    return "We are now full soz";
}

const char*            Span::tooFewNumbersException::what() const throw()
{
    return "Too Few Numbers Exception";
}

void    Span::addNumber(int i)
{
    if (_count >= _max)
    {
        throw fullException();
        return ;
    }
    _N.push_back(i);
    _count++;
}

int     Span::longestSpan()
{   
    if (_count <= 1)
    {
        throw tooFewNumbersException();
        return (-1);
    }
    int small = _N[0];
    for(unsigned int i = 0; i < _count; i++)
    {
        if (_N[i] < small)
            small = _N[i];
    }
    int big = _N[0];
    for(unsigned int i = 0; i < _count; i++)
    {
        if (_N[i] > big)
            big = _N[i];
    }
    return (big - small);
}

int     Span::shortestSpan()
{
    unsigned int small;
    unsigned int trying;

    if (_count <= 1)
    {
        throw tooFewNumbersException();
        return (-1);
    }
    small = static_cast<unsigned int>(_N[0] - _N[1]);
    trying = small;
    for (unsigned int i = 0; i < _count; i++)
    {
        for (unsigned int y = 0; y < _count; y++)
        {
            if (static_cast<unsigned int>(_N[y] - _N[i]) < small && static_cast<unsigned int>(_N[y] - _N[i]) != 0 && y != i)
            {
                small = static_cast<unsigned int>(_N[y] - _N[i]);
                trying = small;
            }
        }
    }
    return (trying);
}
