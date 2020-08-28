/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:31:34 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/27 11:18:10 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB {
    private:
        Weapon		*_weapon;
        std::string	_name;
    public:
        void        attack();
        void        setWeapon(Weapon &weaponB);
        HumanB(std::string name);
        ~HumanB();
};

#endif
