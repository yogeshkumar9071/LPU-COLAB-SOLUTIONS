//Akil wants to write a program that creates a Person object and allows the user to enter the name and age of that person. The program should then display the name and age of the created object.

#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:

    Person() {
        std::cout << "Default constructor is called" << std::endl;
    }


    void setName(const std::string& n) {
        name = n;
    }


    void setAge(int a) {
        age = a;
    }


    void display() {
        std::cout << "Name of current object: " << name << std::endl;
        std::cout << "Age of current object: " << age << std::endl;
    }
};

int main() {

    Person person;


    std::string name;
    int age;

    std::cin >> name;
    std::cin >> age;


    person.setName(name);
    person.setAge(age);


    person.display();

    return 0;
}