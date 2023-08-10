#include <iostream>

int main() {

    // 1) Declare an integer variable and assign the value '10'
    int var{10};

    // 2) Declare a pointer to an integer and initialize it with a null value
    int *pVar{nullptr};

    // 3) Declare an array of integers and initialize it with values from 9 to 0 (in that order)
    int array[10];

    for(int i=0; i<10; i++){
        array[i] = 9 - i;
        //std::cout << array[i];
    }
    //std::cout << "\n" << std::endl;

    // 4) Print the ADDRESS of the variable declared in (1)
    std::cout << &var << std::endl; 

    // 5) Print the VALUE of the variable declared in (1)
    std::cout << var << std::endl; 

    // 6) Print the ADDRESS of the variable declared in (2)
    std::cout << &pVar << std::endl; 

    // 7) Print the VALUE of the variable declared in (2)
    std::cout << pVar << std::endl; 

    // 8) Print the ADDRESS of the variable declared in (3)
    std::cout << &array << std::endl;

    // 9) Print the ADDRESS of the first element of the variable declared in (3)
    std::cout << &array[0] << std::endl;

    // 10) Print the VALUE of the first element of the variable declared in (3)
    std::cout << array[0] << std::endl;

    // 11) Assign the ADDRESS of the variable declared in (1) to the variable declared in (2)
    pVar = &var;

    // 12) Print the VALUE of the variable declared in (2)
    std::cout << pVar << std::endl;

    // 13) Print the VALUE stored at the ADDRESS pointed to by (2)
    std::cout << *pVar << std::endl;

    // 14) Print the result of comparing the ADDRESS of (1) and the VALUE of (2)
    std::cout << (&var == pVar) << std::endl;

    // 15) Put the VALUE '5' at the ADDRESS pointed to by (2)
    *pVar = 5;

    // 16) Print the VALUE of the variable declared in (1)
    std::cout << var << std::endl;

    // 17) Assign the ADDRESS of the variable (3) to the variable declared in (2)
    pVar = array;
    // array = &array[0]

    // 18) Print the VALUE of the variable declared in (2)
    std::cout << pVar << std::endl;

    // 19) Print the VALUE stored at the ADDRESS pointed to by (2)
    std::cout << *pVar << std::endl;

    // 20) Assign the ADDRESS of the first element of (3) to the variable declared in (2)
    pVar = &array[0];

    // 21) Print the VALUE of the variable declared in (2)
    std::cout << pVar << std::endl;

    // 22) Print the VALUE stored at the ADDRESS pointed to by (2)
    std::cout << *pVar << std::endl;

    // 23) Multiply all values in the array declared in (3) by '10', using only variable (2)
    for(int i=0; i<10; i++){
        pVar[i] *= 10;
    }

    // 24) Print the elements of (3) from the array variable using [] notation
    for (int j=0; j<10;j++){
        if(array[j]==0){
            std::cout << array[j];
        } else{
            std::cout << array[j];
            std::cout << " "; 
        }
    }
    std::cout << std::endl;

    // 25) Print the elements of (3) from the array variable using pointer/offset notation
    for (int i = 0; i < 10; i++) {
        std::cout << *(pVar + i) << " ";
    }
    std::cout << std::endl;

    // 26) Print the elements of (3) using variable (2) and pointer/offset notation
      for (int i = 0; i < 10; i++) {
        std::cout << pVar[i] << " ";
    }
    std::cout << std::endl;

    // 27) Assign the ADDRESS of the fifth element of (3) to the variable declared in (2)
    pVar = &array[4];

    // 28) Print the VALUE of the variable declared in (2)
    std::cout << pVar << std::endl;

    // 29) Print the VALUE stored at the ADDRESS pointed to by (2)
    std::cout << *pVar << std::endl;

    // 30) Print the VALUE stored at the ADDRESS of pointer (2) decremented by 4
    std::cout << *(pVar - 4) << std::endl;

    // 31) Declare a pointer to a pointer and initialize it with the ADDRESS of variable (2)
    int **ppVar = &pVar;

    // 32) Print the VALUE of the variable declared in (31)
    std::cout << ppVar << std::endl;

    // 33) Print the ADDRESS of the variable declared in (31)
    std::cout << &ppVar << std::endl;

    // 34) Print the VALUE stored at the ADDRESS pointed to by (31)
    std::cout << *ppVar << std::endl;

    // 35) Print the VALUE stored at the ADDRESS of the pointer pointed to by (31)
    std::cout << **ppVar << std::endl;
    
    return 0;
}
