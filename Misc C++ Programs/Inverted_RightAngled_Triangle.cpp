/*
Name: Blaine Swieder
Date: October 12th, 2024
Class: N/A
FileName: Inverted_RightAngled_Triangle
Description: This program prints inverted right-angled triangle. 
*/

#include<iostream> 

using namespace std; 

int main(){
    int n; // number of rows in the triangle
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
























