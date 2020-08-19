/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombo.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 15:33:41 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:14:03 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBO_H
# define ZOMBO_H

#include <iostream>
#include "Victim.hpp"

class Zombo : public Victim
{
    private:
        Zombo();
    public:
        Zombo(const std::string name);
        ~Zombo();
        Zombo( const Zombo & src );
        Zombo &    operator=(  const Zombo & rhs );
        void getPolymorphed() const;
        std::string getName() const;
};

#endif
