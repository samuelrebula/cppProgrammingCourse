#include <iostream>

//reference

int main(){
    int int_data = 45;
    double double_data = 55;

    int &ref_int_data{int_data};
    double &ref_double_data{double_data};

    std::cout << "int data " << int_data << std::endl;
    std::cout << "&int data " << &int_data << std::endl;
    std::cout << "double data " << double_data << std::endl;
    std::cout << "&double data " << &double_data << std::endl;

    std::cout << "=================================" << std::endl;

    std::cout << "ref int data " << ref_int_data << std::endl;
    std::cout << "&ref int data " << &ref_int_data << std::endl;
    std::cout << "ref double data " << ref_double_data << std::endl;
    std::cout << "&ref double data " << &ref_double_data << std::endl;

    int_data = 111;
    double_data = 67.2;

    std::cout << std::endl;
    std::cout << "int data " << int_data << std::endl;
    std::cout << "&int data " << &int_data << std::endl;
    std::cout << "double data " << double_data << std::endl;
    std::cout << "&double data " << &double_data << std::endl;

    std::cout << "=================================" << std::endl;

    std::cout << "ref int data " << ref_int_data << std::endl;
    std::cout << "&ref int data " << &ref_int_data << std::endl;
    std::cout << "ref double data " << ref_double_data << std::endl;
    std::cout << "&ref double data " << &ref_double_data << std::endl;

    ref_int_data = 1012;
    ref_double_data = 1000.45;

    std::cout << std::endl;
    std::cout << "int data " << int_data << std::endl;
    std::cout << "&int data " << &int_data << std::endl;
    std::cout << "double data " << double_data << std::endl;
    std::cout << "&double data " << &double_data << std::endl;

    std::cout << "=================================" << std::endl;

    std::cout << "ref int data " << ref_int_data << std::endl;
    std::cout << "&ref int data " << &ref_int_data << std::endl;
    std::cout << "ref double data " << ref_double_data << std::endl;
    std::cout << "&ref double data " << &ref_double_data << std::endl;










    double double_value = 12.34;
    double &ref_double_value = double_value; //have to declare a reference and 
    //initialize the reference

    double *p_double_value = &double_value;

    //reading
    std::cout << std::endl;
    std::cout << "double value " << double_value << std::endl;
    std::cout << "ref double value " << ref_double_value << std::endl;
    std::cout << "p double value " << p_double_value << std::endl;
    std::cout << "*p double value " << *p_double_value << std::endl;

    //writing through pointer
    *p_double_value = 15.42;

    std::cout << std::endl;
    std::cout << "double value " << double_value << std::endl;
    std::cout << "ref double value " << ref_double_value << std::endl;
    std::cout << "p double value " << p_double_value << std::endl;
    std::cout << "*p double value " << *p_double_value << std::endl;

    //writing thorugh reference
    ref_double_value = 88.99;
    std::cout << std::endl;
    std::cout << "double value " << double_value << std::endl;
    std::cout << "ref double value " << ref_double_value << std::endl;
    std::cout << "p double value " << p_double_value << std::endl;
    std::cout << "*p double value " << *p_double_value << std::endl;


    double someOtherDouble = 78.87;

    ref_double_value = someOtherDouble;

    std::cout << std::endl;
    std::cout << "making reference with smt else" << std::endl;
    std::cout << "double value " << double_value << std::endl;
    std::cout << "ref double value " << ref_double_value << std::endl;
    std::cout << "p double value " << p_double_value << std::endl;
    std::cout << "*p double value " << *p_double_value << std::endl;

    p_double_value = &someOtherDouble;
    std::cout << std::endl;
    std::cout << "making the pointer point somewhere else..." << std::endl;
    std::cout << "double value " << double_value << std::endl;
    std::cout << "ref double value " << ref_double_value << std::endl;
    std::cout << "& of double value " << &double_value << std::endl;
    std::cout << "& of ref double value " << &ref_double_value << std::endl;
    std::cout << "p double value " << p_double_value << std::endl;
    std::cout << "*p double value " << *p_double_value << std::endl;

    *p_double_value = 555.5;

    std::cout << std::endl;
    std::cout << "making the pointer point somewhere else..." << std::endl;
    std::cout << "double value " << double_value << std::endl;
    std::cout << "ref double value " << ref_double_value << std::endl;
    std::cout << "& of double value " << &double_value << std::endl;
    std::cout << "& of ref double value " << &ref_double_value << std::endl;
    std::cout << "p double value " << p_double_value << std::endl;
    std::cout << "*p double value " << *p_double_value << std::endl;

    //the pointer and reference now are in different memory locations






    //const reference

    std::cout << std::endl;
    int age = 27;
    const int &ref_age{age};

    std::cout << "age " << age << std::endl;
    std::cout << "ref_age " << ref_age << std::endl;

    //ref_age = 31; //compile error, can't do this

    //simulating reference behavior with pointer
    const int *p_age{&age};
    
    // *p_age = 45; this pointer can't modify this data
    std::cout << "p_age " << p_age << std::endl;
    std::cout << "*p_age " << *p_age << std::endl;

    return 0;
}