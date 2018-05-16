#include <iostream>
#include <string>

using namespace std;

int main() {
    string theString = "Florida Polytechnic University";
    int len_of_string = theString.length(); // returns the length

    cout << "The length of theString is " << len_of_string << endl;
    char c;
    c = toupper(theString.at(0));
    char input[100];

    cin >> theString;

    cin.getline(input, sizeof(input));

    cout << theString;

    return 0;
}
