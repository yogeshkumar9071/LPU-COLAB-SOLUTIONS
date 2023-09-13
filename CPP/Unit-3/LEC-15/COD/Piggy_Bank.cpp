// Suppose you have a piggy bank with an initial amount of 50 rupees, and you have to add some more money to it. Create a class named AddAmount with a data member holding the initial amount of Rs. 50.

#include <iostream>

using namespace std;

class AddAmount {
private:
    int amount;

public:
    AddAmount() {
        amount = 50;  
    }

    int getAmount() {
        return amount;
    }
};

int main() {
    AddAmount piggyBank;
    
    cout << piggyBank.getAmount() << endl;
    
    return 0;
}
