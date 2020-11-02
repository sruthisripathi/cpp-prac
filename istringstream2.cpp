/*
The extraction operator >> writes the stream to the variable on the right and returns the istringstream object
So, the entire expression my_stream >> n is an istringstream object and can be used as a boolean

Tokenization
*/

#include <iostream>
#include <string>
#include <sstream>

using std::istringstream;
using std::string;
using std::cout;

int main () {
    string str("sruthi sripathi, sahithi nagulapati,vipul,krish agnihotri");
    istringstream my_stream(str);
    string token;
    size_t pos = -1; // when is size_t used?

    // This tokenization does not appear to be what you thought. What is tokenization?
    while (my_stream >> token) {
        while ((pos = token.rfind(",")) != string::npos) {
            token.erase(pos, 1);
        }
        cout << token << "\n";
    }
}