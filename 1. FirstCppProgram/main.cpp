#include <iostream>

consteval int getValue(){
    return 3;
}

int main(){
    constexpr int value = getValue();
    std::cout << "value : " << value << std::endl;
    return 0;
}