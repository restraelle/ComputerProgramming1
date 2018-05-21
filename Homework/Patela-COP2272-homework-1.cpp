#include <iostream>
#include <string>

using namespace std;

int main() {
    const string ANSWER = "True";
    char middleInitial;
    string courseTitle;
    char PERCENT = '%';

    const string PART1 = "Pro";
    const string PART2 = "gramming and ";
    const string PART3 = "blem Solving with C++";

    cout << PART1 << PART2 << PART3 << endl;

    string name = "Raphael Restrepo";

    int startOfMiddle = name.find(" ") + 1;

    // I'm going to use the variable "name" as myString



    cout << startOfMiddle;

    return 0;
}
