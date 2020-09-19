/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 08:23:25 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/18 16:28:53 by Amber         ########   odam.nl         */
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
	virtual const char* what() const throw();
};
template <typename T>
int 	easyfind(int i, T lst);

#endif
