#include <iostream>
#include <cstring>
#include <string>

int main(){
    char message[] {"hello there. how are you doing? the sun is shining"};
    std::cout << "message " << message << std::endl;

    int blankCount{};
    for(size_t i{0}; i < std::size(message); ++i){
        //std::cout << "value: " << message[i] << std::endl;
        if(std::isblank(message[i])){
            std::cout << "found a blank character at index [" << i << "]" << std::endl;
            ++blankCount;
        }
    }
    std::cout << "in total we found " << blankCount << " blank characters." << std::endl;

    std::cout << std::endl;
    char thought[] {"the c++ programming language is one of the most used languages"};
    int lowerCase{};
    int upperCase{};

    std::cout << "original string: " << thought << std::endl;

    for(auto character : thought){
        if(std::islower(character)){
            ++lowerCase;
        }
        if(std::isupper(character)){
            ++upperCase;
        }
    }
    std::cout << std::endl;
    std::cout << "found " << lowerCase << " lowercase characters and "
    << upperCase << " uppercase characters." << std::endl;

    std::cout << std::endl;
    std::cout << "std::strrchr : " << std::endl;
    const char *str{"Try not. Do, or do not. There is no try."};
    char target = 'T';
    const char *result = str;
    int iterations{};

    while((result = std::strrchr(result, target)) != nullptr){
        std::cout << "Found '" << target << "' starting at '" << result << "'\n";
        
        //increment result, otherwise we'll find target at the same location
        ++result;
        ++iterations;
    }
    std::cout << "iterations: " << iterations << std::endl;

    //concatenation
    std::cout << std::endl;
    std::cout << "std::strcat: " << std::endl;

    char dest[50] = "Hello ";
    char src[50] = "World";
    std::strcat(dest, src);
    std::strcat(dest, " Goodbye world");
    std::cout << "dest: " << dest << std::endl;

    std::string name;
    name = "Peter";

    std::cout << name << std::endl;

    return 0; 
}