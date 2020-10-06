/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:58:06 by Amber         #+#    #+#                 */
/*   Updated: 2020/10/06 18:13:12 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <exception>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <list>
#include <vector>
#include <iostream>

class Span {
    public:
        Span(unsigned int N);
		~Span();
		Span &  operator=( Span const & rhs );
		Span( Span const & src );
		long		longestSpan();
		long	    shortestSpan();
		template< typename T >
		void		 addNumber(T begin, T end)
		{
		    if (_count >= _max)
    		{
        		throw fullException();
    		}
			if ((end - begin) > _max)
			{
        		throw tooBigException();
			}
			this->_N.insert(this->_N.end(), begin, end);
			_count = end - begin;
		}
		void	addNumber(int i);
		
		class fullException : public std::exception {
 		public:
            fullException(void);
            fullException(fullException const & src);
            ~fullException(void) throw();
            fullException & operator=(fullException const & rhs);
			virtual const char* what() const throw();
  		};

		class tooFewNumbersException : public std::exception {
 		public:
            tooFewNumbersException(void);
            tooFewNumbersException(tooFewNumbersException const & src);
            ~tooFewNumbersException(void) throw();
            tooFewNumbersException & operator=(tooFewNumbersException const & rhs);
			virtual const char* what() const throw();
  		};
		
		class tooBigException : public std::exception {
 		public:
            tooBigException(void);
            tooBigException(tooBigException const & src);
            ~tooBigException(void) throw();
            tooBigException & operator=(tooBigException const & rhs);
			virtual const char* what() const throw();
  		};
		int 		getmeN(int i) const;
		int		getmeCount() const;

    private:
	    Span();
        std::vector<int>	_N;
        long    			_count;
        long    			_max;
};

std::ostream &  operator<<(std::ostream & o, Span const & i );

#endif
