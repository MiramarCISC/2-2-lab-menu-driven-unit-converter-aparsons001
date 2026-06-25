#include "converter.hpp"
#include <iostream>

using namespace std;

double inchesToCentimeters(double inches) {
    // TODO: return inches converted to centimeters.

    return inches * 2.54; //inches times 2.54
}

double centimetersToInches(double centimeters) {
    // TODO: return centimeters converted to inches.
    return centimeters / 2.54; // centimeters divided by 2.54
}

double poundsToKilograms(double pounds) {
    // TODO: return pounds converted to kilograms.
    return pounds * 0.45359237; //pounds times 0.45359237
}

double kilogramsToPounds(double kilograms) {
    // TODO: return kilograms converted to pounds.
    return kilograms * 2.20462; // kilo times 2.20462
}

double fahrenheitToCelsius(double fahrenheit) {
    // TODO: return Fahrenheit converted to Celsius.
    return (fahrenheit - 32) / 1.8; // f minus 32 divided by 1.8
}

double celsiusToFahrenheit(double celsius) {    
    return (celsius * 1.8) + 32; // celsius times 1.8 plus 32
}

bool isValidMenuChoice(int choice) { 
    return (choice >= EXIT_CHOICE && choice <= CELSIUS_TO_FAHRENHEIT); //return only valid option
}

bool requiresNonNegativeValue(int choice) {
    if (choice >= 1 && choice <= 4) {
        return true; // only returns true for choices 1-4
                     // non negative values
    }
        return false; // returns false for choice 5 or 6
                     // negative values
}

bool isValidValueForChoice(int choice, double value) {
    if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6){
        return false; // checks validity
    }
    if (choice >= 1 && choice <= 4){
        return value >= 0; // cannot be negative
    }
    if (choice == 5 || choice == 6){
        return true; // Temp can be negative
    }
    return false; // default
}

void printMenu() {
    cout << endl;
    cout << "Unit Converter" << endl;
    cout << endl;
    cout << "1. Inches to centimeters" << endl;
    cout << "2. Centimeters to inches" << endl;
    cout << "3. Pounds to kilograms" << endl;
    cout << "4. Kilograms to pounds" << endl;
    cout << "5. Fahrenheit to Celsius" << endl;
    cout << "6. Celsius to Fahrenheit" << endl;
    cout << "0. Exit" << endl;
    cout << endl;
    cout << "Enter choice: ";
}
