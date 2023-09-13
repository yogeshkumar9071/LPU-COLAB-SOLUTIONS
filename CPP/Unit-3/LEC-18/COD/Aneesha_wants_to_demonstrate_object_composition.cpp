//Aneesha wants to demonstrate object composition using two classes, Base and InitializerList, to set and display values. She has created a Base class with a parameterized constructor and an InitializerList class that composes a Base object.

#include <iostream>

using namespace std;

class Base {
private:
    int value;

public:
    Base(int x) : value(x) {
        cout << "Base Class Constructor" << endl;
        cout << "Value set: " << value << endl;
    }
};

class InitializerList {
private:
    Base base;

public:
    InitializerList(int x) : base(x) {
        cout << "InitilizerList's Constructor" << endl;
    }
};

int main() {
    int N;
    cin >> N;

    InitializerList obj(N);

    return 0;
}
