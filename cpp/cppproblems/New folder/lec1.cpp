//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//    ofstream file("example.txt", ios::app);
//
//    if (file.is_open()) {
//        file << "\nHi veera, nv nduku ila tayaru avtunavo neku aiena ardham avtundha?"
//                "nv ento nirupinchaali, ninnu kadhanukunna vaalu regret feel avvali, lets build an empire.\n";
//
//        cout << "Appended successfully." << endl;
//
//        file.close();
//    } else {
//        cout << "Failed to open the file." << endl;
//    }
//
//    return 0;
//}
#include <iostream>
#include <string>

using namespace std;

class Airline {
private:
    string airlineName;
    string destinations[20];
    int flightsPerDay[20];
    int numDestinations;

public:
    // Constructor to initialize the airline's information
    Airline(string name) : airlineName(name), numDestinations(0) {
    }

    // Function to add a destination and its corresponding flights per day
    void addDestination(string dest, int flights) {
        if (numDestinations < 20) {
            destinations[numDestinations] = dest;
            flightsPerDay[numDestinations] = flights;
            numDestinations++;
        }
    }

    // Function to check the number of flights for a given destination
    int checkFlights(string dest) {
        for (int i = 0; i < numDestinations; i++) {
            if (destinations[i] == dest) {
                return flightsPerDay[i];
            }
        }
        return 0;
    }
};

int main() {
    string airlineName;
    int numDestinations;
    cin >> airlineName;
    cin >> numDestinations;

    Airline airline(airlineName);

    for (int i = 0; i < numDestinations; i++) {
        string destination;
        int flights;
        cin >> destination;
        cin >> flights;
        airline.addDestination(destination, flights);
    }

    string destinationToCheck;
    cin >> destinationToCheck;

    int availableFlights = airline.checkFlights(destinationToCheck);
    cout << availableFlights << endl;

    return 0;
}
