#include <iostream>

using namespace std;

int main() {
    char inputChar;
    int loopCount = 0;
    int letterCount = 0;
    int questionCount = 0;
    int exclaimationCount = 0;

    for(loopCount = 1; loopCount < 100; loopCount++) {
        cin.get(inputChar);
        if(isalpha(inputChar)) {
                letterCount++;
        } else {
            switch(inputChar) {
                case '!':
                    exclaimationCount++;
                    break;
                case '?':
                    questionCount++;
                    break;
            }
        }
    }

    cout << "There are " << letterCount << " characters.";
    return 0;
}
