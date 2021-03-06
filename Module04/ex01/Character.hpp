/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 12:19:14 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/04 12:28:10 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    private:
        int         _AP;
        AWeapon     *_weapon;
        std::string _name;
    public:
        Character();
        Character(std::string const & name);
		Character( const Character & src );
        Character &    operator=(  const Character & rhs );
        ~Character();
        void recoverAP();
        void equip(AWeapon* woh);
        void attack(Enemy* me);
        std::string const & getName() const;
        int const & getAP() const;
        std::string getWeaponName() const;
};
std::ostream &  operator<<(std::ostream & o, Character const & i );

#endif
