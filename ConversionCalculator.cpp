/* ---------------------------------------------------------------------------
** Author: Alexis Lariviere
** Class: CSC 242
** Assignment: Discussion Board 3
** File: ConversionCalculator.cpp
** Description: This program is a conversion calculator that converts metric units to imperial units and vice versa. It prompts the user for a value in metric or imperial units and then displays the equivalent value. The program includes functions for each conversion and uses a switch statement to determine which conversion to perform based on user input.
** Date: 08/08/2026
** -------------------------------------------------------------------------*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

double convert(double value, double factor)
{
    return value * factor;
}

int main()

{

    int choice;
    double value;

    //Array of conversion factors for different units
    string conversions[9] =

    {
        "Meters to Feet",
        "Feet to Meters",
        "Kilograms to Pounds",
        "Pounds to Kilograms",
        "Celsius to Fahrenheit",
        "Fahrenheit to Celsius",
        "Miles to Kilometers",
        "Kilometers to Miles",
        "View Conversion History"
    };

    //Vector to store the conversion factors for each unit
    vector<string> history;

    do {
    cout << "Welcome to the Conversion Calculator!" << endl;
    cout << "Please select a conversion option:" << endl;

    //Display the conversion options stored in the array
    for (int i = 0; i < 9; i++)
    {
        cout << i + 1 << ". " << conversions[i] << endl;
    }
    cout << "10. Exit" << endl;
    cin >> choice;

    //Function to perform the conversion based on user choice
    switch (choice)
    {
    case 1:
        cout << "Enter value in meters: ";
        cin >> value;
        cout << value << " meters is " << convert(value, 3.28084) << " feet." << endl;
        history.push_back(to_string(value) + " meters is " + to_string(convert(value, 3.28084)) + " feet.");
        break;
    case 2:
        cout << "Enter value in feet: ";
        cin >> value;
        cout << value << " feet is " << convert(value, 0.3048) << " meters." << endl;
        history.push_back(to_string(value) + " feet is " + to_string(convert(value, 0.3048)) + " meters.");
        break;
    case 3:
        cout << "Enter value in kilograms: ";
        cin >> value;
        cout << value << " kilograms is " << convert(value, 2.20462) << " pounds." << endl;
        history.push_back(to_string(value) + " kilograms is " + to_string(convert(value, 2.20462)) + " pounds.");
        break;
    case 4:
        cout << "Enter value in pounds: ";
        cin >> value;
        cout << value << " pounds is " << convert(value, 0.453592) << " kilograms." << endl;
        history.push_back(to_string(value) + " pounds is " + to_string(convert(value, 0.453592)) + " kilograms.");
        break;
    case 5:
        cout << "Enter value in Celsius: ";
        cin >> value;
        cout << value << " Celsius is " << convert(value, 9/5.0) + 32 << " Fahrenheit." << endl;
        history.push_back(to_string(value) + " Celsius is " + to_string(convert(value, 9/5.0) + 32) + " Fahrenheit.");
        break;
    case 6:
        cout << "Enter value in Fahrenheit: ";
        cin >> value;
        cout << value << " Fahrenheit is " << convert(value - 32, 5/9.0) << " Celsius." << endl;
        history.push_back(to_string(value) + " Fahrenheit is " + to_string(convert(value - 32, 5/9.0)) + " Celsius.");
        break;
    case 7:
        cout << "Enter value in miles: ";
        cin >> value;
        cout << value << " miles is " << convert(value, 1.60934) << " kilometers." << endl;
        history.push_back(to_string(value) + " miles is " + to_string(convert(value, 1.60934)) + " kilometers.");
        break;
    case 8:
        cout << "Enter value in kilometers: ";
        cin >> value;
        cout << value << " kilometers is " << convert(value, 0.621371) << " miles." << endl;
        history.push_back(to_string(value) + " kilometers is " + to_string(convert(value, 0.621371)) + " miles.");
        break;
    case 9:
        cout << "Viewing conversion history:" << endl;
        for (const auto& entry : history) {
            cout << entry << endl;
        }
        break;
    case 10:
        cout << "Exiting the program. Goodbye!" << endl;
        break;
    default:
        cout << "Invalid choice. Please select a valid option." << endl;
        break;
}

cout << endl;

    } while (choice != 10);

return 0;
}