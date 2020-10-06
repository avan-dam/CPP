/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:58:11 by Amber         #+#    #+#                 */
/*   Updated: 2020/10/06 18:12:30 by Amber         ########   odam.nl         */
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
        this->_N = rhs._N;
        for (unsigned int i=0; i<_count; i++) 
            _N.push_back(_N[i]); 
    }
    return *this;
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

long     Span::longestSpan()
{   
    if (_count <= 1)
        throw tooFewNumbersException();
    long big = *max_element(_N.begin(), _N.end());
    long small = *min_element(_N.begin(), _N.end());
    long longy = big - small;
    return (longy);
}

long     Span::shortestSpan()
{
    long    small;
    long    trying;

    if (_count <= 1)
        throw tooFewNumbersException();
    std::sort(_N.begin(), _N.end());
	std::vector<int>::const_iterator    it;
	std::vector<int>::const_iterator	ite = _N.end() - 1;
    small = static_cast<long>(_N[1]) - static_cast<long>(_N[0]);
    trying = static_cast<long>(_N[1]) - static_cast<long>(_N[0]);
    for (it = _N.begin(); it != ite; ++it)
	{
        trying = static_cast<long>(*(it + 1)) - static_cast<long>(*it);
        if (trying < small && trying != 0)
            small = trying;
	}
    return (small);
}

Span::fullException::fullException(void) {return;}
Span::fullException::fullException(fullException const & src) {*this = src;}
Span::fullException::~fullException(void) throw() {return;}
Span::fullException & Span::fullException::operator=(fullException const & rhs) {(void)rhs; return (*this);}

const char*            Span::fullException::what() const throw()
{
    return "We are now full soz";
}

Span::tooFewNumbersException::tooFewNumbersException(void) {return;}
Span::tooFewNumbersException::tooFewNumbersException(tooFewNumbersException const & src) {*this = src;}
Span::tooFewNumbersException::~tooFewNumbersException(void) throw() {return;}
Span::tooFewNumbersException & Span::tooFewNumbersException::operator=(tooFewNumbersException const & rhs) {(void)rhs; return (*this);}

const char*            Span::tooFewNumbersException::what() const throw()
{
    return "Too Few Numbers Exception";
}

Span::tooBigException::tooBigException(void) {return;}
Span::tooBigException::tooBigException(tooBigException const & src) {*this = src;}
Span::tooBigException::~tooBigException(void) throw() {return;}
Span::tooBigException & Span::tooBigException::operator=(tooBigException const & rhs) {(void)rhs; return (*this);}

const char*            Span::tooBigException::what() const throw()
{
    return "Too large exception";
}

int Span::getmeN(int i) const
{
    if (static_cast<int>(i) >= _count)
        throw tooBigException();
    return this->_N[i];
}

int	Span::getmeCount() const
{
    return this->_count;
}

std::ostream &              operator<<(std::ostream & o, Span const & i )
{
    for (int y = 0; y < i.getmeCount(); y++)
        o << y << " [" << i.getmeN(y) << "] ";
    return o;
}
