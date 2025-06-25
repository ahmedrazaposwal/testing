#include "Person.h"

Person::Person() :
name("Unknown"),
age(0),
gender("Unknown")
{

}

Person::Person(const std::string& name, int age, const std::string& gender):
name(name),
age(age), 
gender(gender) 
{

}

void Person::setAge(int newAge) {
    age = newAge;
}

void Person::displayInfo() const {
    std::cout << "Name: " << name << "\n"
              << "Age: " << age << "\n"
              << "Gender: " << gender << "\n";
}
