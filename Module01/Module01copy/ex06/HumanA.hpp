/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:31:39 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/27 11:13:45 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA {
    private:
        Weapon		&_weapon;
        std::string	_name;
    public:
        void        attack();
        HumanA(std::string name, Weapon &weaponA);
        ~HumanA();
};

#endif
