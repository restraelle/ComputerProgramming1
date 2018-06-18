#include <iostream>
#include <string>
// #include <climit>
#include <cfloat>

using namespace std;

int main() {
    char c;
    short s;
    int i = 10;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
    int array[20];
    int *ptr = array;

    cout << "Size of Char: " << sizeof(c) << endl;
    cout << "Size of Short: " << sizeof(s) << endl;
    cout << "Size of Int: " << sizeof(i) << endl;
    cout << "Size of Long: " << sizeof(l) << endl;
    cout << "Size of Long Long: " << sizeof(ll) << endl;
    cout << "Size of Float: " << sizeof(f) << endl;
    cout << "Size of Double: " << sizeof(d) << endl;
    cout << "Size of Long Double: " << sizeof(ld) << endl;
    cout << "Size of Array: " << sizeof(array) << endl;
    cout << "Size of Pointer: " << sizeof(ptr) << endl;

    return 0;
}
