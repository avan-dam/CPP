/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 13:27:39 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/11 16:35:39 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        void		vaulthunter_dot_exe(std::string const & target);
};

#endif