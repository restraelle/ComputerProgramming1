#include <iostream>
#include <string>

using namespace std;

enum Car { TOYOTA, CHEVY, KIA, HONDA, DODGE, TESLA };

int main() {
    Car potato = TOYOTA;
    string carName;
    cout << "Enter a type of car: ";
    cin >> carName;

    return 0;
}
