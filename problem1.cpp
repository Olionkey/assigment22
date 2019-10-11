#include <iostream>
#include <string>
#include <array>

using namespace std;

const double hourPay = 16.78;
const double socialSecurityTax = .06; // Social Security Tax
const double stateIncomeTax = .05;    // stateIncome Tax
const double fedearlIncomeTax = .14;  // Federal Income Tax
const int unionPayment = 10;
const int dependents = 35; // If more then three depends then extra tax to health insurance.
double grossPay, ss, si, fi, unionPay, nP;

int main()
{
    int hoursWorked, numOfDependants;
    while (true)
    {
        cout << "Enter the number of hours worked this week: ";
        cin >> hoursWorked;
        cout << endl
             << "Enter the number of dependants: ";
        cin >> numOfDependants;
    }
    return 0;
}
/**
 * @param1 {int} hours - calls for amount of hours worker worked
 * @return              returns gross pay;
 */
double calculateGrossPay(int hours)
{
    double grossPay;
    if (hours > 40)
    {
        grossPay = hourPay * (hours - 40) * (1.5 * hourPay);
    }
    else
    {
        grossPay = hourPay * hours;
    }
    return grossPay;
}

double calulcateDeducations(int grossPay)
{
    double ss, si, fi;
    ss = grossPay * socialSecurityTax;
    si = grossPay * stateIncomeTax;
    fi = grossPay * fedearlIncomeTax;
}

void printDeducations()
{
}
