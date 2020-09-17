/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:58:11 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/17 16:20:23 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span(unsigned int N)
{
    this->_N = new int[N];
    for (unsigned int i = 0; i < N; i++)
        this->_N[i] = 0;
    this->_max = N;
    this->_count = 0;
}

span::~span()
{
    delete [] this->_N;
}

const char*            span::fullException::what() const throw()
{
    return "We are now full soz";
}

const char*            span::tooFewNumbersException::what() const throw()
{
    return "Too Few Numbers Exception";
}

void    span::addNumber(int i)
{
    if (_count >= _max)
    {
        throw fullException();
        return ;
    }
    _N[_count] = i;
    _count++;
}

int     span::longestSpan()
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
