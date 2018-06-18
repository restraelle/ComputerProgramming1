#include <iostream>

using namespace std;

int main() {
    int values[10];
    int number;

    for(number = 0; number < 10; number++) {
        cin >> values[number];
    }

    cout << "Stored numbers: \n";

    for(number = 0; number < 10; number++) {
        cout << values[number] << endl;
    }
    return 0;
}
