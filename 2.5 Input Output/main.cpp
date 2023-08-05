#include <iostream>
#include <string>

int main(){
    int age;
    std::string name;

    std::cout << "Please type in your full Name : ";
    std::getline(std::cin,name);

    std::cout << "Please type in your age : ";
    std::cin >> age;

    std::cout << "Hello " << name << " you are " << age << " years old." << std::endl;

    std::cerr << "Error message" << std::endl;
    std::clog << "Log message" << std::endl;
    return 0;
}