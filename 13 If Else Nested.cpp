#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int temperature;
    bool raining, walk, movie, book;


    cout << "Enter the outside temperature: ";
    cin >> temperature;
    cout << "The current temperature is: " << temperature << endl;

    cout << "The recommended activity is ";
    if(temperature > 90) {
        cout << "swimming. " << endl;
    } else if(temperature > 70) {
        cout << "to play tennis." << endl;
    }

    walk = (temperature > 60 && !raining);
    movie = (temperature > 60 && raining);
    book = (temperature < 60);

    return 0;
}
