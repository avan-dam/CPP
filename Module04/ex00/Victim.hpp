/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 13:42:20 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:14:01 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

#include <iostream>

class Victim {
    protected:
        std::string _name;
        Victim();
    public:
        Victim(const std::string name);
        virtual ~Victim();
        Victim( const Victim & src );
        Victim &    operator=(  const Victim & rhs );
        std::string getName() const;
        void getPolymorphed() const;
};

std::ostream &  operator<<(std::ostream & o, Victim const & i );

#endif
