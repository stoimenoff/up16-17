#include <iostream>
using namespace std;

int main(void) {
    int inputNumber = 0;
    int min = 9;
    int max = 0;
    int digit = 0;
    cin >> inputNumber;
    while(inputNumber > 0) {
        digit = inputNumber % 10;
        if(digit < min) {
            min = digit;
        }
        if(digit > max) {
            max = digit;
        }
        inputNumber /= 10;
    }
    cout << min << '\n';
    cout << max << '\n';
    cout << (min + max) / 2.0 << '\n';

    return 0;
} 