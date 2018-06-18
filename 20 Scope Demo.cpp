#include <iostream>
#include <iomanip>

using namespace std;

void someFunc(float);

const int A = 17;
int b, c;

int main() {
    b = 4;
    c = 6;
    someFunc(40);
    return 0;
}

void someFunc(float c) {
    float b = 2.3;
    static int sum;
    cout << "A: " << A << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    int a1 = 1;
    for(a1 = 1; a1 < 5; a1++) {
        sum = sum + a1;
    }
    cout << "Sum: " << sum << endl;
}
