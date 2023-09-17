//Nayana 

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> s;
    vector<int> nge(n, -1);

    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[i] > arr[s.top()]) {
            nge[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " " << nge[i] << endl;
    }

    return 0;
}