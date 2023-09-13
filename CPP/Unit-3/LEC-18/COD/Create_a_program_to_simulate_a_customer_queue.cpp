//Create a program to simulate a customer queue at a service center using the man class to represent customers as objects. Write a code that allows the user to input the number of customers in the queue, create the corresponding man objects, and display messages when a customer joins the queue (created) and when they leave (destroyed). 

#include <iostream>

using namespace std;

class Man {
private:
    static int count;
    int customerNumber;
    int destructionOrder;

public:
    Man() {
        customerNumber = ++count;
        destructionOrder = customerNumber; 
        cout << "Created " << customerNumber << endl;
    }

    ~Man() {
        cout << "Destroyed " << destructionOrder - 1 << endl;
        count--;
    }
};

int Man::count = 0;

int main() {
    int n;
    cin >> n;

    Man* customers = new Man[n];

    delete[] customers;

    return 0;
}
