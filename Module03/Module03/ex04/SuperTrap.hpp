/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 15:31:38 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/20 10:46:14 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

#include <iostream>

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
    public:
        SuperTrap(std::string name);
        SuperTrap();
        ~SuperTrap();
        void		rangedAttack(std::string const & target);
        void        meleeAttack(std::string const & target);
        void		vaulthunter_dot_exe(std::string const & target);
        void		ninjaShoebox(const ScavTrap& target);
        void		ninjaShoebox(const FragTrap& target);
        void		ninjaShoebox(const NinjaTrap& target);
};

# endif
