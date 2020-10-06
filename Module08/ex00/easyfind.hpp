/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 08:23:25 by Amber         #+#    #+#                 */
/*   Updated: 2020/10/06 16:45:03 by Amber         ########   odam.nl         */
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
		virtual const char* what() const throw() {return "Not in me list";}
  	};

template <typename T>
typename T::const_iterator easyfind(int i, T &lst)
{
    typename T::const_iterator myend = std::find(lst.begin(), lst.end(), i);
    if (myend == lst.end())
        throw notInlist();
    return myend;
}

#endif
