#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    cout << "First 50 prime numbers in a 10x5 grid" << endl << endl;

    int a = 0;
    int i = 0;
    int number = 0;
    int amountOfPrimes = 0;
    bool isPrime = true;
    for(number = 1; number < 1000000; number++) {
        isPrime = true;
        for(i = number-1; i > 1; i--) {
            if(!((number % i) > 0)) {
                isPrime = false;
            }
        }
        if(isPrime == true) {
            amountOfPrimes++;
            cout << setw(10) << number;
            if((amountOfPrimes % 10) == 0) {
                cout << endl;
            }
        }
        if(amountOfPrimes >= 50) break;
    }

    return 0;
}
