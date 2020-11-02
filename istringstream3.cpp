/*
In previous istringstream examples, string contained only spaces and single type variables - int or string
If the string has mized type, more care has to be taken to process the string
*/

#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main () {
    string b = "0,0,0,1,0,";

    istringstream my_stream(b);

    char c;
    int n;

    while (my_stream >> n >> c && c == ',') {
        cout << "That stream was successful: " << n << " " << c << "\n";
    }
    cout << "The stream has failed!" << "\n";
}

// "⛰   "