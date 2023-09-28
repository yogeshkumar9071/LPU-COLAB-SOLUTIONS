//Write a program to implement a specialized queue data structure capable of deleting the smallest element within its contents.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N <= 0) {
        cout << "Queue is empty" << endl;
        return 0;
    }

    vector<float> elements(N);


    for (int i = 0; i < N; ++i) {
        cin >> elements[i];
    }


    auto minElementIterator = min_element(elements.begin(), elements.end());
    int minIndex = distance(elements.begin(), minElementIterator);

  
    elements.erase(elements.begin() + minIndex);



 
    for (const auto &element : elements) {
        cout << element << " ";
    }

    return 0;
}
