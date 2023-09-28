// You are assigned the task of developing a package delivery system for a logistics company.

#include <iostream>
#include <queue>

class Package {
public:
    std::string destination;
    int priority;

    Package(const std::string& dest, int prio) : destination(dest), priority(prio) {}

     
    bool operator<(const Package& other) const {
        return priority > other.priority;
    }
};

class PackageDeliverySystem {
private:
    std::priority_queue<Package> deliveryQueue;

public:
    void addPackage(const std::string& dest, int prio) {
        if (deliveryQueue.size() < 5) {
            Package newPackage(dest, prio);
            deliveryQueue.push(newPackage);
            std::cout << "Package added to the delivery queue." << std::endl;
        } else {
            std::cout << "Queue is full. Cannot add more packages." << std::endl;
        }
    }

    void deliverPackage() {
        if (!deliveryQueue.empty()) {
            std::cout << "Delivered package to: " << deliveryQueue.top().destination << std::endl;
            deliveryQueue.pop();
        } else {
            std::cout << "No packages in the delivery queue." << std::endl;
        }
    }

    void viewNextPackage() {
        if (!deliveryQueue.empty()) {
            std::cout << "Next package for delivery: " << deliveryQueue.top().destination << std::endl;
        } else {
            std::cout << "No packages in the delivery queue." << std::endl;
        }
    }
};

int main() {
    PackageDeliverySystem deliverySystem;

    int choice;
    do {
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string destination;
                int priority;
                std::cin.ignore();  
                std::getline(std::cin, destination);
                std::cin >> priority;
                deliverySystem.addPackage(destination, priority);
                break;
            }
            case 2:
                deliverySystem.deliverPackage();
                break;
            case 3:
                deliverySystem.viewNextPackage();
                break;
            case 4:
                std::cout << "Exiting the application." << std::endl;
                break;
            default:
                std::cout << "Invalid choice." << std::endl;
        }

    } while (choice != 4);

    return 0;
}
