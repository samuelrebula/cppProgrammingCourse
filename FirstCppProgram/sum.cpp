#include <iostream>

// Statments and functions

/* int addNumbers(int firstNumber, int secondNumber){
    int sum = firstNumber + secondNumber;
    return sum;
} */

/* int main (int argc, char **argv){
    int firstNumber = 12;
    int secondNumber = 9;
    
    int sum = firstNumber + secondNumber;
    
    sum = addNumbers(firstNumber,secondNumber);
    sum = addNumbers(34,7);

    std::cout << "The sum of the two numbers is: " << sum << std::endl;
    std::cout << "The sum of the two numbers is: " << addNumbers(23,8) << std::endl;

    return 0;
} */


/* int main (int argc, char **argv){
    int firstNumber = 12;
    int secondNumber = 9;
    
    int sum = firstNumber + secondNumber;
    
    std::cout << "12 + 9 = " << sum << std::endl;

    return 0;
} */

int addNumbers(int first_number, int second_number){
    int result = first_number + second_number;
    return result;
}

int multiplyNumbers(int first_number, int second_number){
    int result = first_number * second_number;
    return result;
}

int main(){
    int firstNumber {13}, secondNumber {7};

    std::cout << "First number: " << firstNumber << std::endl;
    std::cout << "second number: " << secondNumber << std::endl;

    int sum = firstNumber + secondNumber;
    std::cout << "sum: " << sum << std::endl;

    sum = addNumbers(25,7);
    std::cout << "sum: " << sum << std::endl;

    sum = addNumbers(30,54);
    std::cout << "sum: " << sum << std::endl;

    std::cout << "sum: " << addNumbers(3,42) << std::endl;

    std::cout << "multi: " << multiplyNumbers(3,2) << std::endl;

    int x;
    x = multiplyNumbers(4,5);
    std::cout << "multi: " << x << std::endl;

    return 0;
}