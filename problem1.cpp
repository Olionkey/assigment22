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

double calculateGrossPay(int hours);
void calulcateDeducations(int grossPay, int numOfDependants);
void printDeducations();

int main()
{
    int hoursWorked, numOfDependants;

        cout << "Enter the number of hours worked this week: ";
        cin >> hoursWorked;
        cout << endl
             << "Enter the number of dependants: ";
        cin >> numOfDependants;


        double temp = calculateGrossPay(hoursWorked);

        calulcateDeducations(temp, numOfDependants);
        printDeducations();

    return 0;
}
/**
 * @param1 {int} hours - calls for amount of hours worker worked
 * @return              returns gross pay;
 */
double calculateGrossPay(int hours)
{
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

void calulcateDeducations(int grossPay, int numOfDep)
{       
     if (numOfDep >= 3)
        // do Something, found out what.
    ss = grossPay * socialSecurityTax;
    si = grossPay * stateIncomeTax;
    fi = grossPay * fedearlIncomeTax;

}

void printDeducations()
{
    cout << "Your gross pay is: \t" << grossPay;
    cout << "\nDeductions\n  Social Security Tax: \t" << ss << endl << "  Federal Income Tax: \t" << fi << endl << "  State Income Tax: \t" << si << "  Union Dues: \t" << unionPayment << endl << "\nYour net pay is: \t" << (grossPay - ss - si - fi);
}
