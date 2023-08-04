#include <iostream>

int main(){
    int value = 45;

    value +=5; //equivalent to value = value + 5
    std::cout << "the value is (after +=5) : " << value << std::endl; //50

    std::cout << std::endl;
    value -=5; //equivalent to value = value -5
    std::cout << "the value is (after -=5) : " << value << std::endl; //45

    std::cout << std::endl;
    value *=2; // equivalent to value = value * 2
    std::cout << "the value is (after *=2) : " << value << std::endl; //90

    std::cout << std::endl;
    value /=3; // equivalent to value = value / 3
    std::cout << "the value is (after /=3) : " << value << std::endl; //30

    std::cout << std::endl;
    value %=11; // equivalent to value = value % 11
    std::cout << "the value is (after %=11) : " << value << std::endl; //8

    std::cout << std::endl;
    std::cout << value++ << std::endl;

    std::cout << std::endl;
    std::cout << value << std::endl;

    int number1 = 4, number2 = 6;

    std::cout << std::boolalpha;
    std::cout << "number1 < number 2 : " << (number1 < number2) << std::endl;

    bool a = false, b = true, c = false;

    std::cout << "((a && b) || c) " << ((a && b) || c) << std::endl;

    return 0;
}