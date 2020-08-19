/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 13:42:15 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/19 16:14:20 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer {
    private:
		Sorcerer();
        std::string	_name;
		std::string	_title;
	public:
        Sorcerer(std::string name, std::string title); 
		~Sorcerer(); 
		Sorcerer( Sorcerer const & src );
        Sorcerer &    operator=( Sorcerer const & rhs );
        std::string     getName() const;
        std::string     getTitle() const;
        void            polymorph(Victim const & viccy) const;
        void            polymorph(Peon const & viccy) const;

};

std::ostream &  operator<<(std::ostream & o, Sorcerer const & i );

#endif
