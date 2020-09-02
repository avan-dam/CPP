/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 21:35:19 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/27 11:10:26 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <cstdlib>

class Brain {
private:
    std::string _size;
    std::string _smartness;
    std::string _emotionalcapity;

public:
    const Brain* identify() const;
    Brain();
    ~Brain();
};

#endif
