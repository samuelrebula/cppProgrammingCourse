#include "person.h"

int Person::personCount = 8;

Person::Person(const std::string& namesParam, int ageParam)
    : fullName{namesParam}, age{ageParam}{
        ++personCount;
    }