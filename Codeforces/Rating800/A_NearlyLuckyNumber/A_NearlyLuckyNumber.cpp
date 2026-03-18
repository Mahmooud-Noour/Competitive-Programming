
#include <iostream>
#include <string>

using namespace std;

int main() {
    string number;
    cin >> number;

    int countLuckyDigits = 0;

    for (char digit : number) {
        if (digit == '4' || digit == '7') {
            countLuckyDigits++;
        }
    }

    // Check if the count of lucky digits is 4 or 7
    if (countLuckyDigits == 4 || countLuckyDigits == 7) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}