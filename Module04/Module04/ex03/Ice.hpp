/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 11:51:11 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/04 13:03:29 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    private:
        unsigned int _xp;
    public:
        Ice();
        ~Ice();
        Ice( const Ice & src );
        Ice &    operator=(  const Ice & rhs );
        Ice* clone() const;
        void use(ICharacter& target);
};

#endif
