/*
======================================================================
 1.Problem  : A.Notelock
 2.Platform : Codeforces
 3.Topic    : Greedy & Two Pointers 
 4.Rating   : 800 (Div. 2)

 5.Approach : 
    - Goal: Find the minimum number of protections needed to prevent any '1' from being changed to '0'.
    - Stability Rule: A '1' at index i is stable if it is protected or if another stable '1' exists within the previous k−1 positions.
    - Greedy Strategy: * Traverse the string and maintain the index of the last_stable_1.
        - When encountering a '1', if the distance from last_stable_1 is ≥k, the current '1' is unstable.
        - To fix this, protect the current '1' (increment count) and update last_stable_1 to the current index.

 6.Time Complexity : O(n)
 7.Space Complexity: O(n)

 8.Problem Link: ( https://codeforces.com/problemset/problem/2154/AA )
======================================================================
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> dp(n + 1, 0);

    int last_stable_1 = -1e9;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {

            dp[i + 1] = dp[i];
        }
        else {
            if (i - last_stable_1 < k) {

                dp[i + 1] = dp[i];
                last_stable_1 = i;
            }
            else {

                dp[i + 1] = dp[i] + 1;
                last_stable_1 = i;
            }
        }
    }

    cout << dp[n] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
