/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFst.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 17:03:15 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/17 14:51:57 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFEL_H
# define PLASMARIFEL_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        virtual  ~PowerFist();
	    PowerFist( const PowerFist & src );
        PowerFist &    operator=(  const PowerFist & rhs );
        virtual void attack() const;
};

#endif
