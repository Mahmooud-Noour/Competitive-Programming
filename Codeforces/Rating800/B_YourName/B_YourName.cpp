#include <bits/stdc++.h>
using namespace std;

bool IsEqual(string A, string B)
{
    for (int i = 0; i < A.length(); i++)
        if (A[i] != B[i])
        {
            return false;
        }
    return true;
}
int main()
{
    int q; cin >> q;
    while (q--)
    {
        int n; cin >> n;
        string s, t; cin >> s >> t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        cout << (IsEqual(s, t) ? "YES\n" : "NO\n");
    }
    return 0;
}
