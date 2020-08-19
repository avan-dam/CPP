/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 13:42:10 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:14:18 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
    private:
        Peon();
    public:
        Peon(const std::string name);
        virtual ~Peon();
        Peon( const Peon & src );
        Peon &    operator=(  const Peon & rhs );
        void getPolymorphed() const;
        std::string getName() const;
};

#endif
