#include <iostream>
#include <string>
#include "car.h"
#include "car.cpp"

using std::string;
using std::cout;

class Sedan : public Car {
    public:
        Sedan(string clr, int number, string brd, string mdl, string trm)
            : Car(clr, number),
              brand(brd),
              model(mdl),
              trim(trm)
        {
            cout << "Sedan initialized successfully!" << std::endl;
        }
    
    private:
        string brand;
        string model;
        string trim;
};

class Truck : public Car {
    public:
        Truck(string brd, string mdl, string trm)
            : brand(brd),
              model(mdl),
              trim(trm)
        // if one doesn't explicitly call constructor of Base Class, and
        // there is no default constructor of Base Class as well, then
        // the compiler would throw an error here
        {
            cout << "Truck initialized successfully!" << std::endl;
        }
    
    private:
        string brand;
        string model;
        string trim;
};

int main () {
    Car car_1 = Car("Green", 1);
    Car car_2 = Car("Red", 2);
    Car car_3 = Car("Blue", 3);

    Sedan sedan_1 = Sedan("Gray", 1, "BMW", "3-Series", "330i-xdrive");
    Sedan sedan_2 = Sedan("Blue", 2, "Mercedes", "C-class", "C300");

    Truck truck_1 = Truck("Ford", "F-150", "Rapters");

    car_1.incrementDistance();

    car_1.printCarData();
    car_2.printCarData();
    car_3.printCarData();
}