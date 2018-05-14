#include <iostream>
#include <string>

using namespace std;

int main() {
    const string BORDER = "=============================================";
    const string NAME = "Raphael Restrepo";
    const string MESSAGE = "This is a test.";
    string outMessage;

    outMessage = "Message to " + NAME + ": " + MESSAGE;

    cout << BORDER << endl << outMessage << endl << BORDER;

    return 0;
}
