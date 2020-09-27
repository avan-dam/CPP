/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 21:35:14 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/27 11:10:36 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>
#include <cstdlib>
#include "Brain.hpp"

class Human {
private:
    Brain const _Humany;

public:
    const Brain* identify() const;
    const Brain& getBrain() const;
};

#endif
