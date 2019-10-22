#include <iostream>
#include <string>
#include <array>

using namespace std;
const double metersPerFoot = 0.3048;

void main()
{
    double meters;
    int feet, inches;
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
}

void metersToFeet(double meters, int &feet, int &inches)
{
    feet = (int)meters / metersPerFoot;
    inches = (int)((meters / metersPerFoot) - feet) * 12 + 0.5;
}