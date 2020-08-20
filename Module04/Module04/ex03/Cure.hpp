/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 16:47:23 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/20 16:00:05 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure( const Cure & src );
        Cure &    operator=(  const Cure & rhs );
        Cure* clone() const;
    	void use(ICharacter& target);
};

#endif
