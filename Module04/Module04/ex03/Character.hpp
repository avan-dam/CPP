/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 18:12:19 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/19 18:34:34 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter
{
    private:
        AMateria	**_MyMateria;
        std::string	_name;
		int			_count;
		Character();
    public:
        ~Character() {}
		Character(std::string name);
		Character( const Character & src );
		Character &    operator=(  const Character & rhs );
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif
