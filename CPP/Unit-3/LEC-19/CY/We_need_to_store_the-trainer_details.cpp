//We need to store the trainer details in a file called "people.dat". The attributes of the person are given in struct Info. Your task is as follows.


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Info {
    char name[51];
    int age;
    char address1[51];
    char address2[51];
    char phone[14];
};

 
void readData() {
    ifstream file("people.dat", ios::binary);
    if (!file) {
        cout << "File not found or unable to open.\n";
        return;
    }

    Info person;
    while (file.read(reinterpret_cast<char*>(&person), sizeof(Info))) {
        cout << "Name: " << person.name << endl;
        cout << "Age: " << person.age << endl;
        cout << "Address line 1: " << person.address1 << endl;
        cout << "Address line 2: " << person.address2 << endl;
        cout << "Phone: " << person.phone << endl;
    }

    file.close();
}

int main() {
    ofstream file("people.dat", ios::binary | ios::app);
    if (!file) {
        cout << "Unable to create or open file.\n";
        return 1;
    }

    char addAnother;
    do {
        Info person;

         
        cin.getline(person.name, sizeof(person.name));

        
        cin >> person.age;
        cin.ignore(); // Ignore newline from previous input

        
        cin.getline(person.address1, sizeof(person.address1));

         
        cin.getline(person.address2, sizeof(person.address2));

         ;
        cin.getline(person.phone, sizeof(person.phone));

        file.write(reinterpret_cast<const char*>(&person), sizeof(Info));

         
        cin >> addAnother;
        cin.ignore(); // Ignore newline for the next input
    } while (addAnother == 'Y' || addAnother == 'y');

    file.close();

  
    readData();

    return 0;
}
