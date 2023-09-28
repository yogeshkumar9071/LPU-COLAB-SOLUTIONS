//You are working on a program that manages a deque implemented using an array.

#include <iostream>
#include <deque>
#include <algorithm>  

using namespace std;

int main() {
    int N;
    cin >> N;

    deque<int> myDeque;


    for (int i = 0; i < N; ++i) {
        int element;
        cin >> element;
        myDeque.push_back(element);
    }

   
    reverse(myDeque.begin(), myDeque.end());


    for (const auto& element : myDeque) {
        cout << element << " ";
    }

    return 0;
}
