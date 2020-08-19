/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 16:41:47 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:21:08 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
# define ISQUAD_H

#include "ISpaceMarine.hpp"

class ISquad
{
    public:
        virtual ~ISquad() {}
    	virtual int getCount() const = 0;
    	virtual ISpaceMarine* getUnit(int unit) const = 0;
    	virtual int push(ISpaceMarine* marine) = 0;
};

#endif
