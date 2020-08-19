/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MyEnemy.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 11:52:02 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:17:30 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYENEMY_H
# define MYENEMY_H

#include "Enemy.hpp"

class MyEnemy : public Enemy
{
    public:
        MyEnemy();
		virtual ~MyEnemy();
		MyEnemy( const MyEnemy & src );
        MyEnemy &    operator=(  const MyEnemy & rhs );
};

#endif
