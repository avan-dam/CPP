/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 13:27:39 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/10 15:22:29 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

#include <iostream>

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public:
        NinjaTrap(std::string name);
        ~NinjaTrap();
        void		ninjaShoebox(const ScavTrap& target);
        void		ninjaShoebox(const FragTrap& target);
        void		ninjaShoebox(const NinjaTrap& target);
};

#endif