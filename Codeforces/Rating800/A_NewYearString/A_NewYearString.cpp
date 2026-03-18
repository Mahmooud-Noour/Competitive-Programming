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
        string s;
        cin >> s;

        if (s.find("2026") != string::npos || s.find("2025") == string::npos) {
            cout << 0 << '\n';
            continue;
        }

        int ans = 4;
        for (int i = 0; i + 4 <= n; i++) {
            int cur = 0;
            for (int j = 0; j < 4; j++)
                if (s[i + j] != "2026"[j]) cur++;
            ans = min(ans, cur);
        }
        cout << ans << '\n';
    }
    return 0;
}
