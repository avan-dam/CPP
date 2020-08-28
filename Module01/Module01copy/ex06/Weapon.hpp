/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:31:30 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/27 11:14:06 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {
    private:
        std::string 		_type;
    public:
        const std::string&	getType() const;
        void				setType(std::string weapontype);
        Weapon(std::string weapontype);
        Weapon();
        ~Weapon( void );
};

#endif
