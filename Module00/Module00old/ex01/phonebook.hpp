#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class phonebook {

public:
    std::string     getInfo( int i ) const;
    void            setcontact(std::string buff, int i);

private:
    std::string    _firstname;
    std::string    _lastname;
    std::string    _nickname;
    std::string    _login;
    std::string    _postaladdress;
    std::string    _emailaddress;
    std::string    _phonenumber;
    std::string   _birthdaydate;
    std::string    _favouritemeal;
    std::string    _underwearcolor;
    std::string    _darkestsecret;
};

#endif