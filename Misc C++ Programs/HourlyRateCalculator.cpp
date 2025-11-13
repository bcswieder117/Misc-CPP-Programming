/*
Blaine Swieder
C++ Programming: Hourly Rate Calculator
Date: June 14th, 2025
Purpose: The objective of this program is to calculate employee pay based on 
pay rate and hours worked.
*/

#include <iostream>
using namespace std; 

int main(){
    double hours; 
    double rate;
    double pay;
    int employee_count = 0;
    bool goAgain = true;
    char response;

    cout << endl << endl;
    while (goAgain == true){

        //Input
        cout << "Please enter the number of hours worked for this pay period: " ;
        cin >> hours; 
        cout << "Please enter the hourly pay rate for this pay period: ";
        cin >> rate; 

        // Processing - Calculates the pay, based on user input.
        pay = hours * rate;

        // Output
        cout << "You will be paid $" << pay << " for this pay period." << endl;
        cout << endl << endl;

        employee_count++;
        cout << "Want to recalculate? (Y/N): ";
        cin >> response;
        cout << endl; 
        if (response == 'N' || response == 'n')
            goAgain = false;
    }

    cout << "The total number of employees for this run was: " << employee_count << endl << endl;

    return 0;
}






















