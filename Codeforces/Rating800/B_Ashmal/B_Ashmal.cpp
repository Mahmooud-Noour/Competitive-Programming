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

        string s = "";
        for (int i = 0; i < n; i++) {
            string a;
            cin >> a;

            if (s.empty()) {
                s = a;
            }
            else {
                string left = a + s;
                string right = s + a;
                s = min(left, right);
            }
        }
        cout << s << "\n";
    }
    return 0;
}