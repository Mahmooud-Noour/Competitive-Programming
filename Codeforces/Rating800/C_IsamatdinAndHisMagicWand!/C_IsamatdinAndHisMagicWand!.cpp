#include <iostream>
#include <algorithm>
using namespace std;
int t, n, i, countEven, countOdd, A[211111];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    while (t--)
    {
        cin >> n;
        countEven = 0; countOdd = 0;
        for (i = 0; i < n; i++) { cin >> A[i]; if (A[i] % 2 == 0)countEven++; else countOdd++; }
        if (countEven != n && countOdd != n) sort(A, A + n);
        for (i = 0; i < n; i++) cout << A[i] << " ";
        cout << endl;
    }
}