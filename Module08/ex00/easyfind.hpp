/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 08:23:25 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/22 17:30:01 by avan-dam      ########   odam.nl         */
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
int 	easyfind(int i, T lst);

#endif
