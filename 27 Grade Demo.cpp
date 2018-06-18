#include <iostream>

using namespace std;

int main() {
    // 8 students, 10 questions
    const int NUMBER_OF_STUDENTS = 8;
    const int NUMBER_OF_QUESTIONS = 10;
    char answers[NUMBER_OF_STUDENTS][NUMBER_OF_QUESTIONS] = {
        {'A', 'B', 'A', 'C', 'D', 'A', 'D', 'D', 'B', 'B'},
        {'A', 'B', 'A', 'C', 'B', 'A', 'D', 'D', 'B', 'B'},
        {'A', 'A', 'A', 'C', 'D', 'A', 'D', 'D', 'B', 'B'},
        {'A', 'B', 'A', 'D', 'D', 'A', 'D', 'A', 'B', 'B'},
        {'B', 'B', 'A', 'C', 'D', 'A', 'D', 'B', 'B', 'B'},
        {'A', 'B', 'A', 'C', 'D', 'A', 'D', 'D', 'B', 'B'},
        {'C', 'B', 'A', 'C', 'D', 'A', 'D', 'C', 'B', 'B'},
        {'A', 'C', 'A', 'C', 'C', 'A', 'D', 'D', 'B', 'B'}};

    char keys[] = {'A', 'B', 'A', 'C', 'D', 'A', 'D', 'D', 'B', 'B'};

    int i = 0;

    for(i = 0; i < NUMBER_OF_STUDENTS; i++) {
        int correct = 0;
        for(int j = 0; j < NUMBER_OF_QUESTIONS; j++) {
            if(answers[i][j] == keys[j]) {
                correct++;
            }
        }
        cout << "Student " << i << " got " << correct << " right! " << "(" << ((float)correct/(float)NUMBER_OF_QUESTIONS)*100 << "% correct)" << endl;
    }
    return 0;
}
