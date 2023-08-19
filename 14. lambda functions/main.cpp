#include <iostream>

//declare a lambda function
//auto func = [](){
//    std::cout << "moscow" << std::endl;
//};

auto funcSum = [](double a, double b){
    return (a + b);
};

int main(){
    /*func();

    //declare a lambda function and call it directly
    [](){
        std::cout << "russia" << std::endl;
    }();
    
    //lambda function that takes parameters
    auto result = [](double a, double b){
        std::cout << "a + b = " << (a + b) << std::endl;
    };
    result(12.1,5.7);

    //lambda function that returns something
    auto func1 = [](double a, double b){
        return (a + b);
    }(10,20);
    std::cout << "func1 = " << func1 << std::endl;
    */

    //auto func2 = [](double a, double b){
    //    return (a + b);
    //};


    double a;
    double b;

    std::cout << "number a: ";
    std::cin >> a;
    std::cout << "number b: ";
    std::cin >> b;

    auto resultOfSum = funcSum(a,b);
    std::cout << "a + b = " << resultOfSum << "\n" << std::endl;

    //capture lists
    //capture by value
    //is manipulating two values in different memory addresses
    std::cout << "capture by value" << std::endl;
    int c{42};

    auto func = [c](){
        std::cout << "inner value: " << c << std::endl; //42
    };

    for(int i = 0; i<5; ++i){
        std::cout << "outer value: " << c << std::endl;
        func();
        ++c;
    }

    std::cout << std::endl;

    //capture by reference
    //change the value in the same memory address
    std::cout << "capture by reference" << std::endl;
    int d{42};

    auto func1 = [&d](){
        std::cout << "inner value: " << d << std::endl; 
    };

    for(int i = 0; i<5; ++i){
        std::cout << "outer value: " << d << std::endl;
        func1();
        ++d;
    } //in this case the inner and the outer value is changing

    return 0;
}