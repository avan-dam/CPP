/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:58:11 by Amber         #+#    #+#                 */
/*   Updated: 2020/10/06 14:54:24 by Amber         ########   odam.nl         */
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
    if (longy == 0)
        throw noSpanException();
    return (longy);
}

long     Span::shortestSpan()
{
    long    small;
    long    trying;
    int     p;

    if (_count <= 1)
        throw tooFewNumbersException();
    p = 0;
    std::sort(_N.begin(), _N.end());
	std::vector<int>::const_iterator    it;
	std::vector<int>::const_iterator	ite = _N.end() - 1;
    small = 4294967295;
    for (it = _N.begin(); it != ite; ++it)
	{
        trying = *(it + 1) - *it;
        if (trying != 0)
            p = 1;
		if (trying < small && trying != 0)
            small = trying;
	}
    if (p == 0)
        throw noSpanException();
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

Span::noSpanException::noSpanException(void) {return;}
Span::noSpanException::noSpanException(noSpanException const & src) {*this = src;}
Span::noSpanException::~noSpanException(void) throw() {return;}
Span::noSpanException & Span::noSpanException::operator=(noSpanException const & rhs) {(void)rhs; return (*this);}

const char*            Span::noSpanException::what() const throw()
{
    return "No Span Exception";
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

long Span::getmeN(long i) const
{
    if (static_cast<long>(i) >= _count)
        throw tooBigException();
    return this->_N[i];
}

long	Span::getmeCount() const
{
    return this->_count;
}

std::ostream &              operator<<(std::ostream & o, Span const & i )
{
    for (unsigned int y = 0; y < i.getmeCount(); y++)
        o << y << " [" << i.getmeN(y) << "] ";
    return o;
}
