#include <iostream>
using namespace std;

int main(void) {
    int first = 0;
    int second = 0;
    int third = 0;
    for(int natural = 0; natural < 1000; ++natural) {
        first = natural / 100;
        second = (natural % 100) / 10;
        third = natural % 10;
        if((first != second) && (second != third) && (third != first)) {
            cout << natural << '\n';
        }
    }

    return 0;
} 