#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;
    return;
}

Sample::~Sample( void ) {
	
	std::cout << "Deconstructor called" << std::endl;
	Sample::_nbInst -= 1;
	return;
}

int    Sample::getNbInst( void ) {
	return Sample::_nbInst;
}

int     Sample::_nbInst = 0; // to initialize a non-member attribute