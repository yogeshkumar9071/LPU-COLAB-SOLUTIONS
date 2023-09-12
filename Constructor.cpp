//#include <iostream>
//
//using namespace std;
//
//class Triangle{
//private:
//    int height; int base;
//public:
//    Triangle()
//    {
//        height = 4; base = 2;
//    }
//    void area()
//    {
//        cout << "Area of the triangle is: "<<  0.5 * ( height * base );
//    }
//};
//
//int main() {
//    Triangle T1;
//    T1.area();
//    return 0;
//}

#include <iostream>
using namespace std;

class abc {
private:
    static int a;
    static int b;

public:
    abc() {
        a++;
    }

    ~abc() {
        b++;
    }

    void show() {
        cout << a << "  " << b << endl;
    }
};

// Define the static member variables outside the class definition
int abc::a = 0;
int abc::b = 0;

int main() {
    abc n1, n2;
    n2.show();
    {
        abc n3;
    }
    n2.show();
    return 0;
}