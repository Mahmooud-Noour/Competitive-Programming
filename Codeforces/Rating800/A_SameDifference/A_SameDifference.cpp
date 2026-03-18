#include <iostream>
using namespace std;
int t, n, i, operation;
string s;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        operation = 0;
        for (i = 0; i < n - 1; i++)
            operation += (s[i] != s[n - 1]);
        cout << operation << endl;
    }
}