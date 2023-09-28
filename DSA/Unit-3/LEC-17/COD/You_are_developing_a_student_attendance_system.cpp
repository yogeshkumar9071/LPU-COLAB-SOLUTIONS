// You are developing a student attendance system for a school.

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class AttendanceQueue {
private:
    int queue[MAX_SIZE];
    int front, rear;

public:
    AttendanceQueue() : front(-1), rear(-1) {}

    void enqueue(int studentID) {
        if (rear == MAX_SIZE - 1) {
            cout << "Queue is full. Cannot enqueue more students." << endl;
        } else {
            if (front == -1) {
                front = 0;
            }
            queue[++rear] = studentID;
        }
    }

    int countOccurrences(int studentID) {
        int count = 0;
        for (int i = front; i <= rear; ++i) {
            if (queue[i] == studentID) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    AttendanceQueue attendance;

    int n, studentID;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> studentID;
        attendance.enqueue(studentID);
    }

    int targetID;
    cin >> targetID;

    int occurrences = attendance.countOccurrences(targetID);

    cout << "Occurrences of " << targetID << " in the queue: " << occurrences << endl;

    return 0;
}
