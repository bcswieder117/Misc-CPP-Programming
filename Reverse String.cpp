/*
Blaine Swieder
October 12th, 2024
This code is used to reverse a string.
File name: Reverse String
*/

#include<iostream>

using namespace std; 

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n - 1; 

    while (start < end){
        swap(arr[start], arr[end]); 
        start++;
        end--;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); 

    reverseArray(arr, n);
    cout << "Reverse Array: "; 
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    } 

    return 0; 
}

































































