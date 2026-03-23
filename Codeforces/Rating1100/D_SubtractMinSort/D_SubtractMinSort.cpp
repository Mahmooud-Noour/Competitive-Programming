/*
======================================================================
 1.Problem  : D. Subtract Min Sort
 2.Platform : Codeforces
 3.Topic    : Greedy
 4.Rating   : 1100 (Div. 3)

 5.Approach : 
  - Goal: Determine if the array can become non-decreasing (ai​≤ai+1​) using the operation: ai​,ai+1​←ai​−min(ai​,ai+1​),ai+1​−min(ai​,ai+1​).
  - Greedy Strategy: To satisfy the non-decreasing condition, we should try to make the prefix of the array as small as possible. The smallest possible value for any element is 0.
  - Step-by-Step Logic:
          - Iterate through the array from left to right, comparing ai​ and ai+1​.
          - If ai​>ai+1​, the condition ai​≤ai+1​ is already violated. Since we are moving left to right, ai​ can no longer be reduced by a previous element, and subtracting min(ai​,ai+1​) would result in ai​>0 and ai+1​=0, which still violates the order. Thus, it's impossible.
          - If ai​≤ai+1​, apply the operation fully to ai​. This reduces ai​ to 0 and ai+1​ to ai+1​−ai​.

  - Conclusion: If we can process the entire array without encountering ai​>ai+1​, the answer is "YES".
 
 6.Time Complexity : O(n)
 7.Space Complexity: O(n)

 8.Problem Link: ( https://codeforces.com/problemset/problem/2060/D )
======================================================================
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool possible = true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            possible = false;
            break;
        }
        a[i + 1] -= a[i];
        a[i] = 0;
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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
