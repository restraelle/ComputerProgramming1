#include <iostream>

using namespace std;

int main() {

    int dividend;
    int divisor;
    int result;

    cout << "Enter a dividend and divisor: ";
    cin >> dividend >> divisor;

    if(divisor != 0) {
        result = dividend / divisor;
        cout << "The result is " << result << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
        result = 9999;
    }

    return 0;
}
