/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/09 17:07:30 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/10 11:27:24 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "FragTrap.hpp"

class ScavTrap : public FragTrap {
    private:
        int _energypoints; //50
        int _maxenergypoints; // 100
        int _meleeattackdamage; // 30
        int _rangedattackdamage; // 20
        int _armordamagereduction; // 5
    public:
        ScavTrap(std::string name);
};

# endif
