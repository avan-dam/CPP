/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 16:23:24 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/19 16:21:13 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator();
		virtual ~AssaultTerminator();
		AssaultTerminator( const AssaultTerminator & src );
		AssaultTerminator &    operator=(  const AssaultTerminator & rhs );
		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
    	virtual void rangedAttack() const;
    	virtual void meleeAttack() const;  
};

#endif
