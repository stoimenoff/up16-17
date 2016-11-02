#include <iostream>
using namespace std;

int main(void) {
    int height = 0;
    int days = 1;
    int currentHeight = 0;
    cin >> height;
    while(1) {
        currentHeight += 2;
        cout << "2 Up" << endl;
        if(currentHeight >= height) {
            cout << "Climbed after: " << days << endl;
            break;
        }
        currentHeight--;
        cout << "1 Down" << endl;
        days++;
    }

    return 0;
}