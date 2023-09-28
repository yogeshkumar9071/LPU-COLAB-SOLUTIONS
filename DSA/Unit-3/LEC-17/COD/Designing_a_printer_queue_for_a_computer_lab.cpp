// You are designing a printer queue for a computer lab. The lab has a printer that can only process one print job at a time.

#include <iostream>

class PrintJob {
public:
    int pages;
    PrintJob* next;

    PrintJob(int p) : pages(p), next(nullptr) {}
};

class PrintQueue {
private:
    PrintJob* front;
    PrintJob* rear;

public:
    PrintQueue() : front(nullptr), rear(nullptr) {}

    void enqueuePrintJob(int pages) {
        PrintJob* newJob = new PrintJob(pages);

        if (rear == nullptr) {
            front = rear = newJob;
        } else {
            rear->next = newJob;
            rear = newJob;
        }

        std::cout << "Print job with " << pages << " pages is enqueued." << std::endl;
    }

    void dequeuePrintJob() {
        if (front == nullptr) {
            std::cout << "Queue is empty." << std::endl;
            return;
        }

        PrintJob* temp = front;
        front = front->next;

        std::cout << "Processing print job: " << temp->pages << " pages" << std::endl;
        delete temp;
    }

    void displayQueue() const {
        if (front == nullptr) {
            std::cout << "Queue is empty." << std::endl;
            return;
        }

        std::cout << "Print jobs in the queue: ";
        PrintJob* current = front;
        while (current != nullptr) {
            std::cout << current->pages << " pages ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    PrintQueue printQueue;

    int option;
    while (std::cin >> option) {
        switch (option) {
            case 1: {
                int pages;
                std::cin >> pages;
                printQueue.enqueuePrintJob(pages);
                break;
            }
            case 2:
                printQueue.dequeuePrintJob();
                break;
            case 3:
                printQueue.displayQueue();
                break;
            default:
                std::cout << "Invalid option." << std::endl;
        }
    }

    return 0;
}
