#include <iostream>
#include <string>

using namespace std;

const string FIRST = "Raphael";
const string LAST = "Restrepo";

int main() {
    string firstLast = FIRST + " " + LAST;
    string lastFirst = LAST + " " + FIRST;

    cout << "First and last: " << firstLast << endl;
    cout << "Last and first: " << lastFirst << endl;

    return 0;
}
