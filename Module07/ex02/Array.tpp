# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Array.tpp                                          :+:    :+:             #
#                                                      +:+                     #
#    By: Amber <Amber@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/16 13:26:24 by Amber         #+#    #+#                  #
#    Updated: 2020/09/16 13:26:39 by Amber         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

template < typename T >
class Pair< int, U> {
    public:
        Pair< int, U >( int const & lhs, U const & rhs ) : _lhs( lhs), _rhs( rhs) {
            std::cout << "partial specialization template" << std::endl;
            return ;
        }

        ~Pair< int, U >(void) { }

        int       flhs( void ) const { return this->_lhs; }
        U const & frhs( void ) const { return this->_rhs; }

    private:
        int      _lhs;
        U const & _rhs;

        Pair< int, U >( void );
};