/*
istringstream object can also be used as a boolean to determine if the last extraction operation failed
This happends if there wasn't any more of the string to stream
*/

#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main() {
    string a("1 2 3");

    istringstream my_stream(a);

    int n;

    while (my_stream) {
        my_stream >> n;
        if (my_stream) {
            cout << "The stream was successful: " << n << "\n";
        } else {
            cout << "The stream was not successful!" << "\n";
        }
    }
}
