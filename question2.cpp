#include <iostream>
#include <string>
#include <array>

using namespace std;
const double metersPerFoot = 0.3048;

void metersToFeet(double meters, int &feet, double &inches);

int main()
{
    double meters, inches;
    int feet;
    string response;
    do
    {
        cout << "Enter the length of the object in meters: " << endl;
        cin >> meters;
        metersToFeet(meters, feet, inches);
        if (feet < 1)
        {
            cout << "The length of the object is " << inches << " inches.";
        }
        else
        {
            cout << "The length of the object is " << feet << " feet," << inches << " inches." << endl;
        }
        cout << "Would you like to run the program again" << endl;
        getline(cin, response);
        getline(cin, response);
    } while (response == "Y" || response == "y");
    return 0;
}

void metersToFeet(double meters, int &feet,  double &inches)
{
    inches = meters * (metersPerFoot * 12);
    cout << inches; 
    feet = (int)inches / 12;
    inches /= 12;
}