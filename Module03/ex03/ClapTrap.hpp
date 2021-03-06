/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 12:44:13 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/20 10:45:05 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap 
{
    protected:
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
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap( ClapTrap const & src );
        ~ClapTrap();
		std::string	getName( void ) const;
        ClapTrap &  operator=( ClapTrap const & rhs );
        void		rangedAttack(std::string const & target);
        void		meleeAttack(std::string const & target);
        void		takeDamage(unsigned int amount);
        void		beRepaired(unsigned int amount);
};

#endif
