#include <iostream>
#include <string>
#include <vector>
#include "car.h"
#include "car.cpp"
using std::string;
using std::vector;
using std::cout;

int main () {
    // Create an empty vector of pointers to cars
    vector<Car*> car_vect;
    Car* cp = nullptr;

    vector<string> colors { "red", "blue", "green" };

    for (int i = 0; i < 100; i++) {
        cp = new Car(colors[i%3], i+1);
        car_vect.push_back(cp);
    }

    for (Car* cp: car_vect) {
        cp->incrementDistance();
    }

    for (Car* cp: car_vect) {
        cp->printCarData();
    }
}
