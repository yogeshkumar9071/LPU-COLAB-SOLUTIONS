// You have been given the responsibility to create a program for task management in a to-do list using a Queue data structure. 

#include <iostream>
#include <string>

class TaskNode {
public:
    std::string description;
    TaskNode* next;

    TaskNode(const std::string& desc) : description(desc), next(nullptr) {}
};

class TaskQueue {
private:
    TaskNode* front;
    TaskNode* rear;

public:
    TaskQueue() : front(nullptr), rear(nullptr) {}

    void enqueueTask(const std::string& desc) {
        TaskNode* newNode = new TaskNode(desc);

        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    std::string getFrontTask() const {
        return (front != nullptr) ? front->description : "No tasks in the queue";
    }

    std::string getRearTask() const {
        return (rear != nullptr) ? rear->description : "No tasks in the queue";
    }
};

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore();   

    TaskQueue taskQueue;

    for (int i = 0; i < n; ++i) {
        std::string taskDescription;
        std::getline(std::cin, taskDescription);
        taskQueue.enqueueTask(taskDescription);
    }

    std::cout << "Front Task: " << taskQueue.getFrontTask() << std::endl;
    std::cout << "Rear Task: " << taskQueue.getRearTask() << std::endl;

    return 0;
}

