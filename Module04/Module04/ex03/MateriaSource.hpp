/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 11:07:07 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/20 16:28:48 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria	**_MyMateria;
        int			_count;
    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource( const MateriaSource & src );
		MateriaSource &    operator=(  const MateriaSource & rhs );
        virtual void learnMateria(AMateria* m);
        virtual AMateria* createMateria(std::string const & type);
};

#endif
