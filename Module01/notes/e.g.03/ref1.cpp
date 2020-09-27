#include <iostream>

int main() {
    int     numberOfBalls = 42;

    int*    ballsPtr = &numberOfBalls; // pointer on interger initialize with the address of number of balls
    int&    ballsRef = numberOfBalls; //this is a reference of type int& this means the type is referenced on int and assign numberOfBalls to it and not the address of numberOfBalls

    std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

    *ballsPtr = 21; // derefence pointer to access numberOfBalls and assign it 21
    std::cout << numberOfBalls << std::endl; // then accessing numberOfBalls which shows 21
    ballsRef = 84;
    std::cout << numberOfBalls << std::endl;
    return (0);
}