#include <iostream>

using namespace std;

int main() {
    int temperature;
    int raining;
    char signal;

    do {
        cout << "Enter the outside temperature: ";
        cin >> temperature;
        cout << "Enter 1 if it is raining, otherwise, enter 0: ";
        cin >> raining;
        cout << "The current temperature is " << temperature;

        switch(raining) {
            case 0:
                cout << " and it is not raining";
                if(temperature > 60) {
                    cout << " so go for a walk.";
                } else {
                    cout << " so read a good book.";
                }
                break;
            case 1:
                cout << " and it is raining";
                if(temperature > 60) {
                    cout << " so go to the movies." << cout;
                } else {
                    cout << " so read a book." << cout;
                }
                break;
        }
        cout << "Enter c to continue or q to quit.";
        cin >> signal;
    } while(signal != 'q');



    return 0;
}
