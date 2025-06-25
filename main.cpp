#include "Model/Person.h"

int main() {
    Person p1("John Doe", 25, "Male");
    p1.displayInfo();

    p1.setAge(30);
    std::cout << "\nUpdated Info:\n";
    p1.displayInfo();

    return 0;
}
