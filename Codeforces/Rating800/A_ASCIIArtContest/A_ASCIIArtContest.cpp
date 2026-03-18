#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int mx = max({ a,b,c });
    int mn = min({ a,b,c });

    if (mx - mn >= 10)
        cout << "check again";
    else
        cout << "final " << (a + b + c - mx - mn);

    return 0;
}