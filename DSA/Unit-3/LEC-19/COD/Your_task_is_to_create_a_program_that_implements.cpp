//Your task is to create a program that implements a deque (double-ended queue) data structure.

#include <iostream>
#include <deque>

using namespace std;

int countAlternateElements(deque<int>& dq) {
    int count = 0;
    while (!dq.empty()) {
        count++;
        dq.pop_front();
        if (!dq.empty()) {
            count++;
            dq.pop_back();
        }
    }
    return count / 2;   
}

int main() {
    deque<int> dq;
    int num;

    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        dq.push_back(num);
    }

    int result = countAlternateElements(dq);

    cout << "Number of alternate elements in the deque: " << result << endl;

    return 0;
}
