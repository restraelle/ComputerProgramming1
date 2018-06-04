#include <iostream>

int Cube(int);

using namespace std;


void DisplayMessage(int d) {
    if(d < 25) {
        cout << "oof";
    } else if(d < 35) {
        cout << "foo";
    } else {
        cout << "i sleeb";
    }
}

int main() {
    int myNumber = 4;
    int theCube = Cube(myNumber);

    cout << theCube << endl;
    DisplayMessage(4);
    return 0;

}

int Cube(int n) {
    return n * n * n;
}
