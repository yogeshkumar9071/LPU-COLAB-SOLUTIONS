//Jai and Rekha are planning to paint their newly built house and are trying to automate the calculation of their wall area in order to order the amount of paint they might need. 

//calculateArea

#include <iostream>
#include <iomanip>  

using namespace std;

class Wall {
private:
    float length;
    float height;

public:
    void setData(float l, float h) {
        length = l;
        height = h;
    }

    float calculateArea() {
        return length * height;
    }
};

int main() {
    Wall wall;
    float length, height;
    cin >> length >> height;
    
    wall.setData(length, height);
    
    float area = wall.calculateArea();
    
    cout << fixed << setprecision(1) << area << endl;
    
    return 0;
}
