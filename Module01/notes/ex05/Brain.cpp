/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 21:35:21 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/27 11:10:29 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

const Brain* Brain::identify() const
{
    return (this);
}

Brain::Brain()
{
    this->_size = "Big";
    this->_smartness="huge";
    this->_emotionalcapity="massive";
}

Brain::~Brain()
{
}
