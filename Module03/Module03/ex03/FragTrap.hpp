/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 13:27:39 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/02 14:33:28 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap();
        FragTrap( FragTrap const & src );
        FragTrap &  operator=( FragTrap const & rhs );
        void		vaulthunter_dot_exe(std::string const & target);
};

#endif
