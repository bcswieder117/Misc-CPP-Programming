/*
Blaine Swieder
C++ Programming: Input Example 1
File: Input_Exmp1
Date: June 12th, 2025
*/

// This program asks the user to enter the length and width of a rectangle.
// It calculates the rectangle's area and outputs the value on the screen.

#include<iostream>
using namespace std; 

int main(){
    float length, width, area;

    cout << "This program calculates the area of a ";
    cout << "rectangle. \n";
    cout << "What is the length of the rectangle?:  ";
    cin >> length; 
    cout << "What is the width of the rectangle?: ";
    cin >> width;
    area = length * width;
    cout << "The area of the given rectangle is " << area << ". \n";


    return 0; 
}




















