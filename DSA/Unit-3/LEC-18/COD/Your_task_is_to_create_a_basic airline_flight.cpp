// Your task is to create a basic airline flight reservation system.

#include<iostream>
#include<queue>
#include<string>
using namespace std;

struct Flight {
    string flightNumber;
    int departureTime;
    float ticketPrice;

    // Overloading comparison operator for priority queue
    bool operator<(const Flight& other) const {
        // Higher priority for lower departure time
        if (departureTime != other.departureTime) {
            return departureTime > other.departureTime;
        }
        // If departure time is the same, higher priority for lower ticket price
        return ticketPrice > other.ticketPrice;
    }
};

int main() {
    priority_queue<Flight> flightQueue;
    int choice;
    
    while (true) {
        cin >> choice;

        switch (choice) {
            case 1: {
                Flight newFlight;
                cin >> newFlight.flightNumber >> newFlight.departureTime >> newFlight.ticketPrice;
                flightQueue.push(newFlight);
                cout << "Flight added to the system." << endl;
                break;
            }

            case 2: {
                if (!flightQueue.empty()) {
                    cout << "Booked ticket for flight: " << flightQueue.top().flightNumber << endl;
                    flightQueue.pop();
                } else {
                    cout << "No flights available." << endl;
                }
                break;
            }

            case 3: {
                if (!flightQueue.empty()) {
                    cout << "Next available flight: " << flightQueue.top().flightNumber << endl;
                } else {
                    cout << "No flights available." << endl;
                }
                break;
            }

            case 4:
                cout << "Exiting the application." << endl;
                return 0;

            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
