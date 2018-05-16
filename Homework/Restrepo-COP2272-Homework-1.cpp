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
    const string PART3 = "Problem Solving with C++";
    cout << PART1 << PART2 << PART3 << endl;

    string name = "Raphael Restrepo";
    int startOfMiddle = name.find(" ") + 1;
    cout << "The position of the space is " << startOfMiddle << endl;

    // I'm going to use the variable "name" as myString
    cout << "The third letter in my name is " << name[2] << endl;

    char letter = 'q';
    cout << "Before uppercase: " << letter << endl;
    letter = toupper(letter);
    cout << "After uppercase: " << letter << endl << endl;

    int int1;
    int int2;
    int int3;

    cout << "Enter the first number: ";
    cin >> int1;
    cout << "Your number is " << int1 << endl << endl;

    cout << "Enter the second number: ";
    cin >> int2;
    cout << "Your number is " << int2 << endl << endl;

    cout << "Enter the third number: ";
    cin >> int3;
    cout << "Your number is " << int3 << endl << endl;

    cin >> int1 >> int2 >> int3;

    return 0;
}
