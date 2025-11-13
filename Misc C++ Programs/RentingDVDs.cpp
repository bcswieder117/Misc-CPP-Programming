/*
Blaine Swieder
C++ Programming: Continue Example 2
Date: June 14th, 2025
Purpose: The objective of this program is to calculate 
the charges for DVD rentals. Every third DVD is free.
*/

#include <iostream> 
#include <iomanip> 
using namespace std;

int main(){
    int dvd_Count = 1; // DVD counter
    int num_DVDs;  // Number of DVDs rented
    double total = 0.0; // Accumulator
    char current; // Current Release, Y/N

    // Get the number of DVDs

    cout << "How many DVDs are being rented? ";
    cin >> num_DVDs;
    
    // Determine the charges
    do { 
        if((dvd_Count % 3) == 0){
            cout << "DVD # " << dvd_Count << " is free! \n";
            continue; // Immediately starts the next iteration
        }
        cout << "Is DVD # " << dvd_Count;
        cout << " a current release (y/n)? ";
        cin >> current;
        if (current == 'Y' || current == 'y')
            total += 3.50;
        else
            total += 2.50;
        dvd_Count++;
    } while (dvd_Count++ <= num_DVDs);
    
    // Disply the total to the user.

    cout << fixed << showpoint << setprecision(2); 
    cout << "The total is $" << total << endl;

    return 0;
}



















