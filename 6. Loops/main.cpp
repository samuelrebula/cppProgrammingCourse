#include <iostream>

//3 types of loops
int main(){
    size_t count{10}, i{0}, a{0}, b{0};

    for(i; i < count; ++i){
        std::cout << i << " for" << std::endl;
    }
    std::cout << std::endl;

    do
    {
        std::cout << a << " do" << std::endl;
        ++a;
    } while (a < count);
    std::cout << std::endl;

    while (b < count)
    {
        std::cout << b << " while" << std::endl;
        ++b;
    }
    
    return 0;
}