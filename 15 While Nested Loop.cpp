#include <iostream>
#include <string>

using namespace std;

const string BLACK = "*****";
const string WHITE = "     ";

int main() {
    string whiteRow, blackRow;
    int loopCount1, loopCount2;

    whiteRow = WHITE + BLACK + WHITE + BLACK + WHITE + BLACK;
    blackRow = BLACK + WHITE + BLACK + WHITE + BLACK + WHITE;

    loopCount1 = 0;
    loopCount2 = 0;
    while(loopCount2 < 4) {
        while(loopCount1 < 4) {
            cout << whiteRow << endl;
            loopCount1++;
        }
        loopCount1 = 0;

        while(loopCount1 < 4) {
            cout << blackRow << endl;
            loopCount1++;
        }
        loopCount1 = 0;

        loopCount2++;
    }



    return 0;
}
