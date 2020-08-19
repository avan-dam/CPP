/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISpaceMarine.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 16:43:21 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:21:14 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_H
# define ISPACEMARINE_H

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* clone() const = 0;
		virtual void battleCry() const = 0;
    	virtual void rangedAttack() const = 0;
    	virtual void meleeAttack() const = 0;
};

#endif
