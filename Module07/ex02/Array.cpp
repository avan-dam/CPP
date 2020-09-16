/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 13:26:24 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/16 14:10:22 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
class Array {
    public:
        Array()
        {
            T* myTs = new T;
            this->_myTs = myTs;
            this->_myTs = 0;
        }
        Array(unsigned int n)
        {
            T* myTs = new T[n];
            this->_myTs = myTs;
            this->_myTs = n;
        }
        printall_myTs()
        {
            for(int i = 0; this)
        }
        // Array( unsigned int ) : _lhs(lhs), _rhs( rhs) {
        //     std::cout << "generic template" << std::endl;
        //     return ;
        // }  
    private:
        T*      _myTs;
        size_t  size;
};

int main(void)
{
    Array<int>A(6);
}
    //     Array( unsigned int ) : _lhs(lhs), _rhs( rhs) {
    //         std::cout << "generic template" << std::endl;
    //         return ;
    //     }
    //     Pair< T, U >( T const & lhs, U const & rhs ) : _lhs(lhs), _rhs( rhs) {
    //         std::cout << "generic template" << std::endl;
    //         return ;
    //     }

    //     ~Pair< T, U >(void) { }

    //     T const & flhs( void ) const { return this->_lhs; }
    //     U const & frhs( void ) const { return this->_rhs; }

    // private:
    //     T const & _lhs;
    //     U const & _rhs;

    //     Pair< T, U >( void );
