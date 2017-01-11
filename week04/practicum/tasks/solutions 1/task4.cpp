#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
    int randomNumber = 0;
    int guestNumber = 0;
    int triesCounter = 0;
    srand (time(NULL));
    randomNumber = rand() % 100 + 1;
    while(1) {
        cin >> guestNumber;
        if(guestNumber < randomNumber) {
            cout << "По-голямо!\n";
        } else {
            if(guestNumber > randomNumber) {
                cout << "По-малко!\n";
            } else {
                cout << triesCounter << '\n';
                break;
            }
        }
        triesCounter++;
    }

    return 0;
}