/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 12:09:48 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/23 13:58:20 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <stack>

template <class T >
class MutantStack: public std::stack<T>{
    public:
        // std::stack<T,Container>::stack
        MutantStack<T>() : std::stack<T>() {}
        // std::stack<T,Container>::~stack
        ~MutantStack<T>() : std::stack<T>() {}

};

#endif
