#include <iostream>

using namespace std;

const float FREEZE_PT = 32.0;
const float BOIL_PT = 212.0;

int main() {
    float avgTemp;

    cout << "Freezing point: " << FREEZE_PT << endl;
    cout << "Boiling point: " << BOIL_PT << endl;

    avgTemp = (FREEZE_PT + BOIL_PT) / 2.0;

    cout << "The average temperature is " << avgTemp << "." << endl;

    return 0;
}
