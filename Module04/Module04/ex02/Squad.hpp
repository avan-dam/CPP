/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 16:46:05 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:21:01 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <stdio.h> 
#include <iostream>

class Squad : public ISquad
{
	private:
		ISpaceMarine 	**_marine;
		int				_count;
    public:
		virtual ~Squad();
		Squad();
		Squad( const Squad & src );
		Squad &    operator=(  const Squad & rhs );
		virtual int getCount() const;
    	virtual ISpaceMarine* getUnit(int unit) const;
    	virtual int push(ISpaceMarine* marine);
};

#endif
