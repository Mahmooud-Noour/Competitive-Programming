#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        static bool seen[200005];
        memset(seen, false, sizeof(seen));

        int distinct = 0;

        for (int i = 0; i < n; i++) 
        {
            int x;
            cin >> x;
            if (!seen[x]) {
                seen[x] = true;
                distinct++;
            }
        }

        for (int c = distinct; ; c++) 
        {
            if (seen[c]) {
                cout << c << '\n';
                break;
            }
        }
    }
    return 0;
}
