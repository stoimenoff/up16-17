#include <iostream>
using namespace std;

int main(void) {
    int inputNumber = 0;
    int sum = 0;
    cin >> inputNumber;
    for(int natural = 0; natural < inputNumber; ++natural) {
        sum += (natural / 10) + (natural % 10);
    }
    cout << sum << '\n';

    return 0;
} 
