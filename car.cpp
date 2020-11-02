#include <iostream>
#include <string>
#include "car.h"

using std::string;
using std::cout;

Car::Car() {
    // Default constructor
    color = "Unknown";
    number = -1;
}

Car::Car(string c, int n) {
    color = c;
    number = n;
}

void Car::printCarData() {
    cout << "Distance that the " << color << " car " << number << " has travelled is: " << distance << "\n";
}

void Car::incrementDistance() {
    distance++;
}
