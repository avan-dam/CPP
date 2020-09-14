#include <string>
#include <iostream>

class Character
{
    public:
        // void    sayHello(std::string const & target);
        void virtual    sayHello(std::string const & target);
};

class Warrior : public Character
{
    public:
        // void    sayHello(std::string const & target);
        void virtual    sayHello(std::string const & target);
};

class Cat {
};

void    Character::sayHello(std::string const & target)
{
    std::cout << "Hello " << target << " !" << std::endl;
}

void    Warrior::sayHello(std::string const & target)
{
    std::cout <<"FUCK OFF " << target << " , I dont like you !" <<std::endl;
}

int    main(void)
{
    //This is ok obvs, Warrior is a Warrior
    Warrior* a = new Warrior();

    // This is also OK because Warrior IS a Character - here is behaves as a character
    Character*  b = new Warrior();

    // Ths would NOT be ok because character IS NOT a Warrior
    // Although they ARE related and W is a C, the reverse is untrue
    // Warrior* c = new Character();

    a->sayHello("students");
    b->sayHello("students");
    return (0);
}

// If use virtual treats b as a warrior 
// If do not use virtual key word treats b as a character