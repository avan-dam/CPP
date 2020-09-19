/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:58:06 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/18 16:56:33 by Amber         ########   odam.nl         */
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

class Span {
    public:
        Span(unsigned int N);
		~Span();
		Span &  operator=( Span const & rhs );
		Span( Span const & src );
		void	addNumber(int i);
		int		longestSpan();
		int     shortestSpan();

		class fullException : public std::exception {
 		public:
			virtual const char* what() const throw();
  		};
		class tooFewNumbersException : public std::exception {
 		public:
			virtual const char* what() const throw();
  		};
    private:
	    Span();
        std::vector<int>	_N;
        unsigned int    	_count;
        unsigned int    	_max;
};

#endif
