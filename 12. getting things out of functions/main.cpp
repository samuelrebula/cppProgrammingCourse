#include <iostream>
#include <string>

/*
void maxStr(const std::string& input1, const std::string input2, 
std::string& output){
    if(input1 > input2){
        output = input1;
    } else {
        output = input2;
    }
}

void maxInt(int input1, int input2, int &output){
    if(input1 > input2){
        output = input1;
    } else {
        output = input2;
    }
}

void maxDouble(double input1, double input2, double *output){
    if(input1 > input2){
        *output = input1;
    } else {
        *output = input2;
    }
}

int sum(int a, int b){
    int result = a + b;
    std::cout << "In: &result(int): " << &result << std::endl;
    return result;
}
*/

std::string addStrings(std::string str1, std::string str2){
    std::string result = str1 + str2;
    std::cout << "In: &result(std::string): " << &result << std::endl;
    return result;
}

int main(){
    /*
    std::string outStr;
    std::string string1("StPetersburg");
    std::string string2("Moskva");

    maxStr(string1,string2,outStr);
    std::cout << "maxStr: " << outStr << std::endl;

    int outInt{};
    int in1{45};
    int in2{32};

    maxInt(in1,in2,outInt);
    std::cout << "maxInt " << outInt << std::endl;

    double outDouble{};
    double d1{65.78};
    double d2{7.88};

    maxDouble(d1,d2,&outDouble);
    std::cout << "maxDouble " << outDouble << std::endl;

    int a{34}, b{16};

    int result = sum(a,b);
    std::cout << "Out: &result(int): " << &result << std::endl;
    std::cout << "sum: " << result << std::endl; //return by value
    */

    std::string strResult = addStrings(std::string("Moskva,"), std::string(" Russia"));
    std::cout << "Out: &result(std::string): " << &strResult << std::endl;
    std::cout << "strResult: " << strResult << std::endl;
    //the compiler will return by reference

    return 0;
}