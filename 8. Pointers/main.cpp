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
    
    std::cout << *p << std::endl;   // prints the value pointed to by the pointer
                                    // which means, it prints the integer value stored
                                    // at the first memory position













    //Pointer To Char
    const char *message{"Hello world"};
    
    //*message = B compile error
    std::cout << "\n" << "message: " << *message << std::endl;

    //allow to modify the string
    char message1[]{"Hello world"};

    message1[0] = 'B';
    std::cout << "message1: " << message1 << std::endl;











    // Dynamic memory allocation
    int number{22}; //Stack

    int *p_number = &number;

    std::cout << std::endl;
    std::cout << "Declaring pointer and assigning address: " << std::endl;
    std::cout << "number: " << number << std::endl;
    std::cout << "p_number: " << p_number << std::endl;
    std::cout << "&number: " << &number << std::endl;
    std::cout << "*p_number: " << *p_number << std::endl;

    int *p_number1; //Unitialized pointer, contains junk address
    int number1{12};
    p_number1 = &number1; //make it point to valid address
    std::cout << std::endl;
    std::cout << "Unitialized pointer" << std::endl;
    std::cout << "*p_number1: " << *p_number1 << std::endl;

    //Dynamic heap memory
    int *p_number4{nullptr};
    p_number4 = new int;    // Dynamic allocate space for a single int on the heap
                            // This memory belongs to our program from now in. The system 
                            // can't use it for anything else, untill we return it.
                            // After this line executes, we will have a valid memory location 
                            // allocated. the size of the allocated memory will be such that it
                            // can store the rype pointed to by the pointer


    *p_number4 = 77; // writing into dynamically allocated memory 
    std::cout << std::endl;
    std::cout << "dynamic allocating memory" << std::endl;
    std::cout << "*p_number4: " << *p_number4 << std::endl;

    //return memomy to the OS
    delete p_number4;
    p_number4 = nullptr;

    //can reuse pointer
    p_number4 = new int(81);
    std::cout << "reused *p_number4 " << *p_number4 << std::endl;

    delete p_number4;
    p_number4 = nullptr;














    // avoiding problems with dangling pointers

    int *p_number8{new int(352)}; //master pointer
    int *p_number9{p_number8};

    std::cout << std::endl;
    std::cout << "*p_number8 " << *p_number8 << std::endl;

    if(p_number8 != nullptr){
        std::cout << "*p_number9 " << *p_number9 << std::endl; 
        //only use slave pointer
        //when master pointer is valid
    }

    delete p_number8; //master release memory
    p_number8 = nullptr;

    if(p_number8 != nullptr){
        std::cout << "*p_number9 " << *p_number9 << std::endl; 
        //only use slave pointer
        //when master pointer is valid
    }else{
        std::cerr << "WARNING : trying to use an invalid pointer" << std::endl;
    }
    








    //when new fails

    /*int *data = new int[100000000000];
    for(size_t i{0}; i<10000000000; ++i){
        int *data = new int[100000000000];
    }*/



    //exception
    /*
    for(size_t i{0}; i<10000000000; ++i){

        try{
            int *data = new int[100000000000];
        }catch(std::exception& ex){
            std::cout << "something went wrong" << ex.what() << std::endl;
        }
    }
    */


    //std::nothrow 
    /*
    for(size_t i{0}; i < 100; ++i){
        int *data = new(std::nothrow) int[1000000000];

        if(data != nullptr){
            std::cout << "data allocated." << std::endl;
        }else{
            std::cout << "data allocation failed." << std::endl;
        }
    }
    std::cout << std::endl;
    std::cout << "program ending well" << std::endl;
    */

    // in case of failures = nullptr
    std::cout << std::endl;









    //NULLPTR safety
    int *pointerNumber{};
    pointerNumber = new int(7);

    /* if(!(pointerNumber == nullptr)){
        std::cout << "pointerNumber points to a VALID address" << std::endl;
        std::cout << "*pointerNumber " << *pointerNumber << std::endl;
    } else {
        std::cout << "pointerNumber points to a INVALID address" << std::endl;
    } */


    //same
    if(pointerNumber){
        std::cout << "pointerNumber points to a VALID address" << std::endl;
        std::cout << "*pointerNumber " << *pointerNumber << std::endl;
    } else {
        std::cout << "pointerNumber points to a INVALID address" << std::endl;
    }

    delete pointerNumber;
    pointerNumber = nullptr;
    // avoid memory leak









    //Dynamic Arrays
    
    size_t size{10};
    std::cout << std::endl;
    //different ways you can declare an array
    //dinamically and how they are initialized

    double *p_salaries {new double[size]};  
    //salaries array will
    //contain garbage values

    int *p_students {new(std::nothrow) int[size]{}}; //all values initialized with 0

    double *p_scores {new(std::nothrow) double[size]{1,2,3,4,5}};  
    //allocating memory space
    //for an array of size double 
    //vars. first 5 will be initialized 
    //with 1,2,3,4,5, and the rest will be 0's.

    //nullptr check and use the allocated array
    if(p_scores){
        for(size_t i{}; i<size; ++i){
            //print out elements. can use regular array acess notation, or pointer arithmetic
            std::cout << "value " << p_scores[i] << " " << *(p_scores + i) << std::endl;
        }
    }
    std::cout << p_scores << std::endl;

    delete[] p_scores;
    p_scores = nullptr;

    delete[] p_students;
    p_students = nullptr;

    delete[] p_salaries;
    p_salaries = nullptr;

    return 0;
}