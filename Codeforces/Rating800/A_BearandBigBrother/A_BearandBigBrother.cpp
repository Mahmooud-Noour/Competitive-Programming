#include <iostream>

using namespace std;

int main()
{
    int L, B, ans = 0;
    cin >> L >> B;

    if (L == B)
        cout << 1 << endl;
    else
    {
        while (L <= B)
        {
            L *= 3;
            B *= 2;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}