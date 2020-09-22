/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:58:06 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/22 21:13:47 by Amber         ########   odam.nl         */
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
		int		longestSpan();
		int     shortestSpan();
		template< typename T >
		void		 addNumber(T begin, T end)
		{
			if ((end - begin) > _max)
			{
        		throw tooBigException();
				return ;
			}
			for (T it = begin; _count < _max && it != end; ++it)
			{
				_N.push_back(*it);
				_count++;
			}
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
		void		getmevector();
		int 		getmeN(int i);

    private:
	    Span();
        std::vector<int>	_N;
        unsigned int    	_count;
        unsigned int    	_max;
};

#endif
