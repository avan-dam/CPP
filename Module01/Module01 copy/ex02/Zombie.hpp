/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:53:25 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/26 18:38:31 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
private:
    std::string _type;
    std::string _name;
public:
	Zombie(std::string name, std::string type);
	Zombie();
	~Zombie();
    void        announce();
    void        setmezombie(std::string name, std::string type);
};

#endif
