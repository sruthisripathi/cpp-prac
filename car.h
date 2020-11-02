#ifndef CAR_H
#define CAR_H

#include <string>

using std::string;

class Car {
    private:
        string color;
        int number;
        int distance = 0;

    public:
        Car();
        Car(string clr, int num);
        void printCarData();
        void incrementDistance();
};

#endif /* car.h */
