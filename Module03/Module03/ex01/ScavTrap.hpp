/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 17:05:29 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/10 12:45:38 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>


class ScavTrap {
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
        ScavTrap(std::string name);
        ScavTrap( ScavTrap const & src );
        ~ScavTrap();
        std::string getName( void ) const;
        ScavTrap &  operator=( ScavTrap const & rhs );
        void		rangedAttack(std::string const & target);
        void		meleeAttack(std::string const & target);
        void		takeDamage(unsigned int amount);
        void		beRepaired(unsigned int amount);
		void		challengeNewcomer();
};

#endif