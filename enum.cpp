#include <iostream>
using std::cout;

int main() {
    // Create the enum color with fixed values
    enum class Color { white, black, blue, red };

    // Difference between enum and enum class?
    // https://www.geeksforgeeks.org/enum-classes-in-c-and-their-advantage-over-enum-datatype/

    // Create a color variable and set it to Color::blue
    Color my_color = Color::blue;

    // Test to see if my car is red
    if (my_color == Color::red) {
        cout << "The color of my car is red!" << "\n";
    } else {
        cout << "The color of my car is not red!" << "\n";
    }

    enum class Direction { kUp, kDown, kRight, kLeft };

    Direction a = Direction::kUp;


    switch (a)
    {
    case Direction::kUp:
        cout << "Going Up!" << "\n";
        break;
    case Direction::kDown:
        cout << "Going Down!" << "\n";
        break;
    case Direction::kLeft:
        cout << "Going Left!" << "\n";
        break;
    case Direction::kRight:
        cout << "Going Right!" << "\n";
    }
}