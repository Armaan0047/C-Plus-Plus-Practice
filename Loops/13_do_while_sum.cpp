// Program to find sum of digits of a number using do-while loop
#include <iostream>
using namespace std;

int main() {
    int num, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    do {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    } while(num != 0);

    cout << "Sum of digits = " << sum;

    return 0;
}
