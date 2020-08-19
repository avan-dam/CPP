#include <string>
#include <iostream>

class ACharacter
{
    // private:
    //     std::string name; // this works just cannot instantate it only the warrior will be able to actually have this attribute
    public:
        virtual void    attack(std::string const & target) = 0; //pure function - the method cannot be implement
        void            sayHello(std::string const & target);
};

class Warrior : public ACharacter
{
    public:
        virtual void    attack(std::string const & target);
};

void    ACharacter::sayHello(std::string const & target)
{
    sts::cout << "Hello " << target << " !" << std::endl;
}

void    Warrior::attack(std::string const & target)
{
    std::cout << "*Attacks " << target << " with a sword*" << std::endl;
}

class ICoffeeMaker
{
    public:
        virtual void        filleWaterTank(IWaterSource * src) = 0;
        virtual ICoffee*    makeCoffee(std::string const & type) = 0; //use ICoffee because dont know exactly what type of coffee, but know that i can recieve a coffee 
};

int main()
{
    ACharacter*     a = new Warrior();
    // This would NOT be ok because ACharacter is abstract
    // ACharacter*  b = new ACharacter();
    a->sayHello("students");
    a->attack("roger");
}