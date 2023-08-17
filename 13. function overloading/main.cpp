#include <iostream>
#include <string>

int max(int a, int b){
    return (a>b)? a : b;
}

/*
can't overload on the return type. compile error
dobule max(int a, int b){
    return (a>b)? a : b;
}
*/

double max(double a, double b){
    return (a>b)? a : b;
}

std::string_view max(std::string_view a, std::string_view b){
    return (a>b)? a : b;
}

int main(){
    int x{1},y{3};
    double c{1.84}, d{6.54};
    std::string str1{"Moskva"}, str2{"Novosibirsk"};

    std::cout << "max(int): " << max(x,y) << std::endl;
    std::cout << "max(double): " << max(c,d) << std::endl;
    std::cout << "max(string): " << max(str1,str2) << std::endl;

    return 0;
}