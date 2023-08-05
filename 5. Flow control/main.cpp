#include <iostream>

int main(){
    int number1{55}, number2{60};

    bool result = (number1 < number2);
    std::cout << std::boolalpha << "result : " << result << std::endl;

    /*
    std::cout << std::endl;
    std::cout << "free standing if statment" << std::endl;

    if(result){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }

    if(!(result == true)){
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }
    */

    std::cout << std::endl;
    std::cout << "using the else clause" << std::endl;

    //could use if(number1 < number2)
    if(result){
        std::cout << number1 << " is less than " << number2 << std::endl;
    } else {
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    /* use if-else statment for various conditions
    if (condition1) {
    // code block 1
    }
    else if (condition2){
    // code block 2
    }
    else {
    // code block 3
    }


    Ternary operator
    result = (condition) ? option1 : option2;

    //equivalent
    if(condition){
        result = option1;
    }else{
        result = option2;
    }
    */

    int a{300}, b{250}, max{};
    max = (a > b) ? a : b;
    std::cout << "\n" << "max : " << max << std::endl;

    //other example
    std::cout << std::endl;
    std::cout << "speed" << std::endl;
    bool fast = true;

    int speed{(fast) ? 300 : 150};
    std::cout << "The speed is : " << speed << std::endl;

    return 0;
}