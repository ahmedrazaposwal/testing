#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person {
private:
    std::string name;
    int age;
    std::string gender;

public:
    Person();
    Person(const std::string& name, int age, const std::string& gender);

    void setAge(int newAge);
    void displayInfo() const;
};

#endif // PERSON_H
