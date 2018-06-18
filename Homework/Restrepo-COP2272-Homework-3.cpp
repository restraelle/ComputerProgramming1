#include <iostream>


using namespace std;

// problem 2
void Max(int, int, int*);

// problem 5
void Reverse(string, string*);

// problem 8
bool Equals(float, float);

// problem 10
float ConeVolume(float, float);

int main() {
    string orig = "My name is Raphael.";
    string lani = "lol";
    int a = 6;
    int b = 8;
    int c = 0;

    Max(a, b, &c);
    Reverse(orig, &lani);

    cout << orig << endl;
    cout << lani << endl;
    return 0;
}

// problem 1
void Max(int num1, int num2, int *greatest) {
    //problem 3

    if(num1 > num2) {
        *greatest = num1;
    } else {
        *greatest = num2;
    }
}

// problem 4
void Reverse(string original, string* lanigiro) {
    // problem 6

    int counter = 0;
    while(1 == 1) {
        if(original[counter] == '\0') {
            break;
        } else {
            counter++;
        }
    }

    (*lanigiro) = "";
    for(int a = counter-1; a >= 0; a--) {
        (*lanigiro) = (*lanigiro) + original[a];
    }
}

// problem 9
bool Equals(float num1, float num2) {
    float precision = 0.00000001;
    if(num1 < (num2+precision) || num1 > (num2-precision)) {
        return true;
    } else {
        return false;
    }
}

// problem 11
float ConeVolume(float radius, float height) {
    float PI = 3.1415;
    return (1/3)*PI*radius*radius*height;
}


