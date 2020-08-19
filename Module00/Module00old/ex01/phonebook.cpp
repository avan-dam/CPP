/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 17:42:59 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/07/28 11:13:23 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

void            phonebook::setcontact(std::string buff, int i) {
    if ( i == 1 )
        this->_firstname = buff;
    if ( i == 2 )
        this->_lastname = buff;
    if ( i == 3 )
        this->_nickname = buff;
    if ( i == 4 )
        this->_login = buff;
    if ( i == 5 )
        this->_postaladdress = buff;
    if ( i == 6 )
        this->_emailaddress = buff;
    if ( i == 7 )
        this->_phonenumber = buff;
    if ( i == 8 )
        this->_birthdaydate = buff;
    if ( i == 9 )
        this->_favouritemeal = buff;
    if ( i == 10 )
        this->_underwearcolor = buff;
    if ( i == 11 )
        this->_darkestsecret = buff;
	return;
}

std::string    phonebook::getInfo( int i ) const {
    if ( i == 1 )
        return this->_firstname;
    if ( i == 2 )
        return this->_lastname;
    if ( i == 3 )
        return this->_nickname;
    return this->_firstname;
}
