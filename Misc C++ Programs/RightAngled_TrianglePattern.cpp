/*
Name: Blaine Swieder 
Class: N/A 
Date: 10/12/2024
Filename: RightAngled_Triangle_Pattern
Description: The goal of this program is to produce a right-angled triangle pattern. 
*/

#include<iostream> 

using namespace std; 

int main(){ 
    int n; // number of rows in the triangle
    cout << "Enter the number of rows: ";
    
    cin >> n; // get the number of rows from the user

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* "; // print a star for each iteration of the inner loop
        }
        cout << endl; // print a newline after each row
    }
    return 0;
}






























