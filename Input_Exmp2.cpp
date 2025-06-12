/*
Name: Blaine Swieder
C++ Programming: Input Example 2
Date: June 12th, 2025
*/

// This program will ask the user to enter the length and width of a rectangle. 
// It calculates the rectangle's area and outputs the value on the screen.

#include <iostream>
using namespace std;

int main() {
    int length, width, area;

    cout << "\n";
    cout << "This program calculates the area of a rectangle.\n";
    cout << "\n";

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    area = length * width;

    cout << "\n";
    cout << "The area of the rectangle is ";
    cout << area;
    cout << ".\n";

    return 0;
}










