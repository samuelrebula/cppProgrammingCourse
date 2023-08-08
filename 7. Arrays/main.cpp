// Arrays store elements from the same type

#include <iostream>

int main(){
    /*
    int scores[10];

    std::cout << "writing data in array with loop : " << std::endl;

    //write dara
    for(size_t i=0; i<10; ++i){
        scores[i] = i * 3;
    }

    //read data
    for(size_t i=0; i<10; ++i){
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }


    std::cout << std::endl;
    int class_sizes[] {10,12,15,11,18,17};

    for(auto value : class_sizes){
        std::cout << "value : " << value << std::endl;
    }
    

    int scores[] {1,2,3,4,5,6,7,8,9,10,11,12};

    int count {std::size(scores)};

    for(size_t i{0}; i<count; ++i){
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }
    */


    //Declare array
    char message[6] {'h','e','l','l','o','\0'};

    //Print out the array thorugh looping
    std::cout << "message: ";
    for(auto c : message){
        std::cout << c;
    }
    std::cout << std::endl;
    std::cout << "size: " << std::size(message) << std::endl;

    //Can also modify elements of char array

    std::cout << std::endl;
    std::cout << "Modify array data" << std::endl;

    message[1] = 'a';

    //Print out the array
    std::cout << "message: ";
    for(auto c : message){
        std::cout << c;
    }
    std::cout << std::endl;
    std::cout << "size: " << std::size(message) << std::endl;

    //String literal

    std::cout << std::endl;
    std::cout << "String literal array" << std::endl;

    char message1[]{"Hello world"};
    std::cout << "message: " << message1 << std::endl;   
    std::cout << "size: " << std::size(message1) << std::endl;    

    return 0;
}