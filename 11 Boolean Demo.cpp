#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    bool compare1 = false;
    bool compare2 = false;

    compare2 = (3 == 2);

    cout << compare1 << endl;
    cout << compare2 << endl;

    string myString = "CAT";
    int pos;

    pos = myString.find('A');

    // string::npos is the position of the exit character
    if(pos == string::npos) {
        cout << "No A was found." << endl;
    } else {
        cout << "An A was found at position " << pos << endl;
    }

    pos = myString.find('B');

    if(pos == string::npos) {
        cout << "No B was found." << endl;
    } else {
        cout << "A B was found at position " << pos << "." << endl;
    }

    return 0;
}
