#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;

    this->publicFoo = 0;
    std::cout << "this->publicfoo: " << this->publicFoo << std::endl;
    this->_privateFoo = 0;
    std::cout << "this->privatefoo: " << this->_privateFoo << std::endl;
    
    this->publicBar();
    this->privateBar();
	return;
}

Sample::~Sample( void ) {
	
	std::cout << "Deconstructor called" << std::endl;
	return;
}

void    Sample::publicBar( void ) const {
    std::cout << "member function publicbar called" << std::endl;    
	return;
}

void    Sample::privateBar( void ) const {
    std::cout << "member function privatebar called" << std::endl;    
	return;
}