/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 11:51:11 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/20 15:59:51 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice( const Ice & src );
        Ice &    operator=(  const Ice & rhs );
        Ice* clone() const;
        void use(ICharacter& target);
};

#endif
