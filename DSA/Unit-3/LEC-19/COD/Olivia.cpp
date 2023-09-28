// Olivia

#include <iostream>
#include <deque>
#include <unordered_set> // Include this header for using unordered_set

using namespace std;

int main() {
    deque<int> myDeque;
    unordered_set<int> seenElements; 

    int element;
    while (cin >> element && element != -1) {
        
        if (seenElements.find(element) == seenElements.end()) {
            myDeque.push_back(element);
            seenElements.insert(element); // Mark the element as seen
        }
    }

   
    for (const auto& el : myDeque) {
        cout << el << " ";
    }

    return 0;
}
