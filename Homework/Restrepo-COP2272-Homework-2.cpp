
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {
   // problem 1
   int a = -10;

   while (a <= 10) {
      cout << a << " ";
      a++;
   }

   // problem 2
   int b = 1;
   int sum = 0;
   while (sum < 10000) {
      sum += b;
      b++;
   }

   // problem 3
   bool yes = false;
   string input = "";

   while (1 == 1) {
      cout << "Enter your answer: ";
      cin >> input;
      if (input == "Yes" || input == "yes") {
         yes = true;
         break;
      } else if (input == "No" || input == "no") {
         yes = false;
         break;
      }
      cout << "Not an appropriate response. Please try again." << endl;
   }

   //problem 4
   int stars = 0;
   int counter = 0;

   cout << "How many stars?: ";
   cin >> stars;

   for (counter = 0; counter < stars; counter++) {
      cout << "*";
   }
   //problem 5
   int day = 4;
   cout << "It is ";
   switch (day) {
   case 0:
      cout << "Sunday";
      break;
   case 1:
      cout << "Monday";
      break;
   case 2:
      cout << "Tuesday";
      break;
   case 3:
      cout << "Wednesday";
      break;
   case 4:
      cout << "Thursday";
      break;
   case 5:
      cout << "Friday";
      break;
   case 6:
      cout << "Saturday";
      break;
   default:
      cout << "an impossible day";
      break;
   }
   cout << "." << endl;

   // problem 6
   bool check = false;
   string inp = "";

   do {
      cout << "Would you like to continue?: ";
      cin >> inp;
      if (inp == "Y") {
         check = true;
      } else if (inp == "N") {
         check = false;
      } else {
         cout << "Not a correct input. Please try again." << endl;
      }
   } while (check == false);

   // problem 7
   int sum2 = 0;
   int sumMax = -1;
   int num = 1;
   cout << "Enter the maximum value for the sum: ";
   cin >> sumMax;

   do {
      sum2 += num;
      num++;
   } while (sum2 < sumMax);

   cout << num << endl;

   // problem 8
   int hours = 3;
   int minutes = 15;

   for(hours = 3; hours <= 7; hours++) {
        for(; minutes < 60; minutes++) {
            cout << hours << ":";
            if(minutes < 10) {
                cout << "0";
            }
            cout << minutes << endl;
            if(hours == 7 && minutes == 30)
                break;
        }
        minutes = 0;
   }
   return 0;
}
