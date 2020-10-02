/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 12:09:48 by Amber         #+#    #+#                 */
/*   Updated: 2020/10/02 12:56:59 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <stack>
#include <list>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T,Container>{
    public:
        MutantStack();
        MutantStack( MutantStack const & src );
        MutantStack &    operator=( MutantStack const & rhs );
        ~MutantStack();

        typedef typename std::stack<T, Container>::container_type::iterator iterator;
        
        iterator begin() {
            return (this->c.begin());
        }
        iterator end() {
            return (this->c.end());
        }
        iterator rbegin() {
            return (this->c.rbegin());
        }
        iterator rend() {
            return (this->c.rend());
        }
};
        
template <class T, class Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>() {
    return;
}
template <class T, class Container>
MutantStack<T, Container>::MutantStack( MutantStack const & src ) :
std::stack<T, Container>(src)
{
    return ;
}

template <class T, class Container>
MutantStack<T, Container> &    MutantStack<T, Container>::operator=( MutantStack const & rhs )
{
    if ( this != &rhs )
        std::stack<T, Container>::operator=( rhs );
    return(*this);
}

template <class T, class Container>
MutantStack<T, Container>::~MutantStack() {
    return;
}

#endif
