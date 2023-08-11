#include <iostream>
#include "person.h"

/*class Person{
    public : 
        Person(const std::string& namesParam, int ageParam);

        void printInfo()const{
            std::cout << "name: " << fullName << " , age: " << age << std::endl;
        }
    
    private :
        std::string fullName;
        int age;
};

struct Point{
    double m_x{};
    double m_y{};
};
*/

int main(){

    Person p1("Jon Snow", 26);
    p1.printInfo();

    //Point p1;
    //std::cout << "p1.x : " << p1.m_x << " , p1.y : " << p1.m_y << std::endl;

    return 0;
}