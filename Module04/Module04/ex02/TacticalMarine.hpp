/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 16:23:24 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/19 16:19:27 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
		virtual ~TacticalMarine();
		TacticalMarine( const TacticalMarine & src );
		TacticalMarine &    operator=(  const TacticalMarine & rhs );
		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
    	virtual void rangedAttack() const;
    	virtual void meleeAttack() const;  
};

#endif
