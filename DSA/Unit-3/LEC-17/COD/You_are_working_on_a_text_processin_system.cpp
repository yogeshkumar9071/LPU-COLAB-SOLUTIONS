//You are working on a text processing system that analyzes the frequency of characters in a given string. 

#include <iostream>
#include <cstring>
using namespace std;

const int MAX_SIZE = 26;

class CharQueue {
private:
    int front, rear;
    int charCount[MAX_SIZE];
    char queue[MAX_SIZE];

public:
    CharQueue() : front(-1), rear(-1) {
        memset(charCount, 0, sizeof(charCount));
    }

    void enqueue(char ch) {
        int index = ch - 'a';
        charCount[index]++;
        queue[++rear] = ch;
    }

    int findFirstUnique() {
        while (front <= rear) {
            int index = queue[front] - 'a';
            if (charCount[index] == 1) {
                return front;
            }
            front++;
        }
        return -1;
    }
};

int main() {
    CharQueue charQueue;

    string input;
    cin >> input;

    for (char ch : input) {
        charQueue.enqueue(ch);
    }

    int result = charQueue.findFirstUnique();

    cout << result << endl;

    return 0;
}
