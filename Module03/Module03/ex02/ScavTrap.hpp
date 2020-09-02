/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 13:27:44 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/02 14:16:30 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(std::string name);
        ScavTrap();
        ~ScavTrap();
        ScavTrap( ScavTrap const & src );
        ScavTrap &  operator=( ScavTrap const & rhs );
        void		challengeNewcomer();
};

# endif
