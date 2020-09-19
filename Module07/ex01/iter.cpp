/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 12:20:49 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/19 15:33:38 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// class Awesome
// {
// public:
// Awesome( void ) : _n( 42 ) { return; }
// int get( void ) const { return this->_n; }
// private:
// int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

template< typename T>
void       iter( T * array, size_t size, void (*f)( T const & x )) {
    for (size_t i = 0; i < size; i++)
        f(array[i]);
    return ;
}

template< typename T>
void    printme(T const & array )
{
    std::cout << "[" << array << "]";
}

int main()
{
    std::cout << "Print string array:" << std::endl;
    std::string str[4] = {"this", "is", "me", "array"};
    iter(str, 4, printme); 
    std::cout << std::endl << "Print int array:" << std::endl;
    int inty[4] = {1, 2, 4, 5};
    iter(inty, 4, printme); 
    // int intar[6] = {1, 2, 4, 5, 7, 8};
    // iter(intar, 6, printme); 
    // int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can’t write int[] tab. Wouldn’t that make more sense?
    // Awesome tab2[5];
    // iter(tab, 5, print );
    // iter(tab2, 5, print );
    return 0;
}
