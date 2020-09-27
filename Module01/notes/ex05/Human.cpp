/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 21:35:16 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/27 11:10:19 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

const Brain& Human::getBrain() const
{
    return (this->_Humany);
}

const Brain* Human::identify() const
{
    return (_Humany.identify());
}
