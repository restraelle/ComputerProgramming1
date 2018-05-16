#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    const int num1 = 10468;
    const int num2 = 1492;

    // sets width of the next printed variable like %5i
    cout << setw(10) << num1 << "|" << setw(10) << num2 << "|" << endl;

    // sets the precision of floating point numbers (INCLUDES NUMBERS TO THE LEFT OF THE FLOATING POINT)
    cout << setprecision(4) << 16.192838 << endl;
    cout << setprecision(4) << 163422 << endl;

    return 0;

}
