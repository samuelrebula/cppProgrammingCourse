// calculator of integer numbers using functions

/* int sum = addNumbers(13,7);

std::cout << sum << std::endl;

// can use direct in cout
std::cout << addNumbers(3,5) << std::endl;
std::cout << multiNumbers(3,5) << std::endl;
std::cout << subNumbers(10,5) << std::endl;
std::cout << divideNumbers(10,5) << std::endl; */


#include <iostream>

int addNumbers(int firstNumber, int secondNumber){
    int x = firstNumber + secondNumber;
    return x;
}

int multiNumbers(int firstNumber, int secondNumber){
    int x = firstNumber * secondNumber;
    return x;
}

int subNumbers(int firstNumber, int secondNumber){
    int x = firstNumber - secondNumber;
    return x;
}

int divideNumbers(int firstNumber, int secondNumber){
    int x = firstNumber / secondNumber;
    return x;
}

int main(){

    int number1, number2;
    char operation;
    std::cout << "write the fisrt number ";
    std::cin >> number1;
    std::cout << "write the second number ";
    std::cin >> number2;

    std::cout << "write the operation: " << std::endl;
    std::cout << "+ equals sum" << std::endl;
    std::cout << "* equals multiplication" << std::endl;
    std::cout << "- equals minus" << std::endl;
    std::cout << "/ equals division" << std::endl;
    std::cin >> operation;

    switch (operation){
    case '+':
        std::cout << "result " << addNumbers(number1,number2);
        break;

    case '*':
        std::cout << "result " << multiNumbers(number1,number2);
        break;

    case '-':
        std::cout << "result " << subNumbers(number1,number2);
        break;

    case '/':
        std::cout << "result " << divideNumbers(number1,number2);
        break;
    default:
        std::cout << "invalid operator" << std::endl;
        return 1;
    }

    return 0;
}