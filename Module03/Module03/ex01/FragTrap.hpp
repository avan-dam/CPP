/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 17:05:29 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/02 13:18:44 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>


class FragTrap {
    private:
        int			_hitpoints;
        int			_maxhitpoints;
        int			_energypoints;
        int			_maxenergypoints;
        int         _level;
        std::string _name;
        int         _meleeattackdamage;
        int			_rangedattackdamage;
        int			_armordamagereduction;
    public:
        FragTrap(std::string name);
        FragTrap( FragTrap const & src );
        ~FragTrap();
        FragTrap();
        FragTrap &  operator=( FragTrap const & rhs );
        void		rangedAttack(std::string const & target);
        void		meleeAttack(std::string const & target);
        void		takeDamage(unsigned int amount);
        void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(std::string const & target);
};

#endif
