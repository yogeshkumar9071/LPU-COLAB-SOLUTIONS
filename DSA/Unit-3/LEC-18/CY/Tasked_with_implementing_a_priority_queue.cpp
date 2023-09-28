// You are tasked with implementing a priority queue for a hospital's emergency room.

#include <iostream>
#include <queue>

class Patient {
public:
    int data;
    int priority;

    Patient(int d, int p) : data(d), priority(p) {}

    // Overloading the '<' operator to compare Patients based on priority
    bool operator<(const Patient& other) const {
        return priority > other.priority;
    }
};

class EmergencyRoom {
private:
    std::priority_queue<Patient> patientQueue;

public:
    void addPatient(int data, int priority) {
        Patient newPatient(data, priority);
        patientQueue.push(newPatient);
    }

    void viewQueue() {
        if (patientQueue.empty()) {
            std::cout << "Priority queue elements: Priority queue is empty" << std::endl;
        } else {
            std::cout << "Priority queue elements: ";
            while (!patientQueue.empty()) {
                std::cout << patientQueue.top().data << " ";
                patientQueue.pop();
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int n;
    std::cin >> n;

    EmergencyRoom emergencyRoom;

    for (int i = 0; i < n; ++i) {
        int data, priority;
        std::cin >> data >> priority;
        emergencyRoom.addPatient(data, priority);
    }

    emergencyRoom.viewQueue();

    return 0;
}
