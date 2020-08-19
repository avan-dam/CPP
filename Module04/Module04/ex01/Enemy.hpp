/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 17:51:39 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/17 14:45:59 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

#include <iostream>

class Enemy 
{
    protected:
        Enemy();
		int			_HP;
		std::string	_type;
    public:
        Enemy(int hp, std::string const & type);
		virtual ~Enemy();
		Enemy( const Enemy & src );
        Enemy &    operator=(  const Enemy & rhs );
		std::string const & getType() const;
		int getHP() const;
		void setHP(int numb);
		virtual void takeDamage(int damage);
};

#endif
