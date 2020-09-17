/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:58:06 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/17 16:20:25 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <exception>
#include <iostream>

class span {
    public:
        span(unsigned int N);
		~span();
		void	addNumber(int i);
		int		longestSpan();
		class fullException : public std::exception {
 		public:
			virtual const char* what() const throw();
  		};
		class tooFewNumbersException : public std::exception {
 		public:
			virtual const char* what() const throw();
  		};
    private:
        int *  _N;
        unsigned int    _count;
        unsigned int    _max;
};

#endif
