// Copyright (c) 2026 Alex OBrien All rights reserved
// .
// Created by : Alex OBrien
// Created on : October 30, 2026
// This program tells the user if the inputed year is a leap
// year or not.

#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year to check if it's a leap year: ";
    cin >> year;

    if (cin.fail()) {
        cout << "Your input isn't a valid integer!";
    } else if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a leap year!";
    } else {
        cout << year << " is not a leap year!";
    }
}