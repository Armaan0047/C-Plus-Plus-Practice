// Program to find the largest element in an array by iterating through all elements and comparing

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 45, 23, 67, 34, 89, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int max = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    cout << "Largest element: " << max << endl;
    
    return 0;
}