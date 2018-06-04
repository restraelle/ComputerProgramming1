#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

void GetLoanAmt(float& loanAmound);
void GetRest(float& monthlyInterest, int& numbersOfYears);
void GetInterest(float& monthlyInterest);
void DeterminePayment(float loadAmount, float monthlyInterest, int numberOfPayments, float& payment);
void PrintResults(float loanAmount, float yearlyInterest, int numberOfPayments, float payment, float totalInterest);

int main() {
    float loanAmount;
    int numberOfYears;
    float monthlyInterest;
    int numberOfPayments;
    float payment;
    float totalInterest;

    GetLoanAmt(loanAmount);
    while(loanAmount > 0) {
        GetRest(monthlyInterest, numberOfPayments);
        numberOfPayments = numberOfYears * 12;

        DeterminePayment(loanAmount, monthlyInterest, numberOfPayments, payment);
        totalInterest = payment * numberOfPayments * loanAmount;
        PrintResults(loanAmount, monthlyInterest, numberOfPayments, payment, totalInterest);
        GetLoanAmt(loanAmount);
    }
    return 0;
}

void GetLoanAmt(float& loanAmount) {
    cout << "Input loan amount. A negative loan amount ends the processing." << endl;
    cin >> loanAmount;
}

void GetRest(float& monthlyInterest, int& numberOfYears) {
    GetInterest(monthlyInterest);
    cout << "Enter the number of years of the loan." << endl;
    cin >> numberOfYears;
}

void GetInterest(float& monthlyInterest) {
    float yearlyInterest;
    cout << "Input interest rate. An interest rate of less than 0.25 is assumed to be a decimal rather than a percent." << endl;
    cin >> yearlyInterest;
    if(yearlyInterest >= 0.25) {
        yearlyInterest = yearlyInterest / 100;
    }
    monthlyInterest = yearlyInterest / 12;
}

void DeterminePayment(float loanAmount, float monthlyInterest, int numberOfPayments, float& payment){
    using namespace std;
    payment = (loanAmount * pow(1+monthlyInterest, numberOfPayments) *monthlyInterest) / (pow(1 + monthlyInterest, numberOfPayments) - 1);
}

void PrintResults(float loanAmount, float yearlyInterest, int numberOfPayments, float payment, float totalInterest) {
    cout << fixed << "Loan amount: " << setprecision(2) << loanAmount << endl;
    cout << fixed << "Interest rate: " << setprecision(4) << yearlyInterest * 100 << "%" << endl;
    cout << fixed << "Number of payments: " << numberOfPayments << endl;
    cout << fixed << "Monthly payments: " << setprecision(2) << payment << endl;
    cout << fixed << "Total interest: " << setprecision(2) << (payment * numberOfPayments - loanAmount) << endl;
}
