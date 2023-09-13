//Tisha wants to write a program that welcomes a person and says hello to them. 

#include <iostream>
#include <string>

using namespace std;

class Welcome {
public:
    Welcome() {}

    void greet(const string& name) {
        cout << "Welcome " << name << endl;
    }
};

class Hello {
public:
    Hello() {}

    void greet(const string& name) {
        cout << "Hello " << name << endl;
    }
};

int main() {
    string name;
    cin >> name;

    Welcome welcome;
    Hello hello;

    welcome.greet(name);
    hello.greet(name);

    return 0;
}



