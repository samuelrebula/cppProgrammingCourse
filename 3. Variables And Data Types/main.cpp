#include <iostream>

int main(){
    bool redLight {false};
    bool greenLight {true};

    if(redLight == true){
        std::cout << "Stop" << std::endl;
    } else {
        std::cout << "go through" << std::endl;
    }

    if(greenLight){
        std::cout << "the light is green" << std::endl;
    } else {
        std::cout << "the is not green" << std::endl;
    }

    //printing a bool
    //1 true
    //0 false

    std::cout << std::endl;
    std::cout << "red light " << redLight << std::endl;
    std::cout << "green light " << greenLight << std::endl;

    std::cout << std::boolalpha;
    std::cout << "red light " << redLight << std::endl;
    std::cout << "green light " << greenLight << std::endl;

    /*
    char letter {'w'};
    char value = 65;
    std::cout << "value : " << value << std::endl;

    //change char to int
    std::cout << "value : " << static_cast<int>(value) << std::endl;
    */

    return 0;
}