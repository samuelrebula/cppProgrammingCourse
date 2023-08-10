#include <iostream>

/* Pointer only stores the type for which it was declared

    //Declare and initialize pointer
    int pNumber{};
    doublepFractionalNumber{};

    //Explicity initialize with nullptr
    int pNumber1{nullptr};
    doublepFractionalNumber1{nullptr};

    //Pointers to different variables are of the same size
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl // 4
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl // 8
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl // 8
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl // 8
    std::cout << "sizeof(pNumber1) : " << sizeof(pNumber1) << std::endl // 8
    std::cout << "sizeof(pFractionalNumber1) : " << sizeof(pFractionalNumber1) << std::endl // 8
*/

int main(){
    //Initializing pointers and assigning them data
    //We know that pointers store addresses of variables
    int int_var{43};
    int *p_int{&int_var}; //The adress of operator (&)

    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Adress in memory) : " << p_int << std::endl;

    //You can also change the address stored in a pointer any time
    int int_var1{65};
    p_int = &int_var1; //Assign a different adrress to the pointer
    std::cout << "p_int (with different adress) : " << p_int << std::endl;

    //Dereferencing a pointer
    int *p_int2{nullptr};
    int intData{56};
    p_int2 = &intData;

    std::cout << "value : " << *p_int2 << std::endl;
    //reading something stored in the adress of a pointer


    //In C++, the name of an array can be used as a pointer to its first element.
    int a[10] {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int *p {nullptr};
    
    // p stores a memory address - int*
    // p = (a[0]); // in this case, a[0] stores an integer value - int
    
    // p stores a memory address - int*
    // p = (&a[0]); // &a[0] stores the memory address of the integer value
    
    p = a; // is the same as: p = (&a[0])
    
    std::cout << "\n" << p << std::endl; // prints the memory address value
    
    std::cout << *p << std::endl; // prints the value pointed to by the pointer
                        // which means, it prints the integer value stored
                        // at the first memory position

    return 0;
}