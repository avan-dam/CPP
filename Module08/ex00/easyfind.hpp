/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 08:23:25 by Amber         #+#    #+#                 */
/*   Updated: 2020/10/07 11:28:31 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

class notInlist : public std::exception {
 	public:
        notInlist(void) {return;}
        notInlist(notInlist const & src) {*this = src;}
        ~notInlist(void) throw() {return;}
        notInlist & operator=(notInlist const & rhs) {(void)rhs; return (*this);}
		virtual const char* what() const throw() {return "not found";}
  	};

template <typename T>
typename T::iterator easyfind(const int& i, T& lst)
{
    typename T::iterator myend;
    myend = std::find(lst.begin(), lst.end(), i);
    if (myend == lst.end())
        throw notInlist();
    return myend;
}

#endif
