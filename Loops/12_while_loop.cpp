// This program takes a number n as input and calculates the sum of numbers from 1 to n using a while loop
#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    while(i <= n) {
        sum += i;
        i++;
    }

    cout << "Sum = " << sum;
    return 0;
}
