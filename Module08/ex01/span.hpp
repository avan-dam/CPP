/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:58:06 by Amber         #+#    #+#                 */
/*   Updated: 2020/10/06 14:30:03 by Amber         ########   odam.nl         */
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
        		return ;
    		}
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
		
		class noSpanException : public std::exception {
 		public:
            noSpanException(void);
            noSpanException(noSpanException const & src);
            ~noSpanException(void) throw();
            noSpanException & operator=(noSpanException const & rhs);
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
		long 		getmeN(long i) const;
		long		getmeCount() const;

    private:
	    Span();
        std::vector<int>	_N;
        long    			_count;
        long    			_max;
};

std::ostream &  operator<<(std::ostream & o, Span const & i );

#endif
