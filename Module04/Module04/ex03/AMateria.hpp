/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 16:27:45 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/19 18:45:05 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _name;
		std::string _type;
		unsigned int _xp;
		AMateria();
    public:
        AMateria(std::string const & type);
    	AMateria( const AMateria & src );
		AMateria &    operator=(  const AMateria & rhs );
    	virtual ~AMateria();
    	std::string const & getType() const; //Returns the materia type
    	unsigned int getXP() const; //Returns the Materia's XP
    	virtual AMateria* clone() const = 0;
    	virtual void use(ICharacter& target);
};

#endif