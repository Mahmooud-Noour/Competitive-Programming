/*
======================================================================
 1.Problem  : E. Power of Points
 2.Platform : Codeforces
 3.Topic    : Math & Sortings
 4.Rating   : 1500 (Div.3)

 5.Approach : 
  - Mathematical Reduction: The sum of the power of points ∑fp​ for a given s is equivalent to the sum of the number of integer points covered by each segment [s,xi​]. A segment between a and b covers ∣b−a∣+1 points.
    - Formula: For a fixed s, the total sum is:
		i=1∑n​(∣xi​−s∣+1)=n+i=1∑n​∣xi​−s∣
  - Efficiency via Sorting: To calculate the sum of absolute differences ∑∣xi​−s∣ for every possible s∈{x1​,…,xn​} in O(nlogn), we:
    	- Sort the coordinates x while keeping track of their original indices.
    	- Use Prefix Sums to calculate the sum of elements to the left and right of any point quickly.
  - Calculation for xi​ at sorted index i:
    	- Left side: The sum of (xi​−xj​) for all j≤i. This is (i+1)⋅xi​−PrefixSum[i+1].
    	- Right side: The sum of (xj​−xi​) for all j>i. This is (TotalSum−PrefixSum[i+1])−(n−1−i)⋅xi​.
   - Final Result: Add these two sums and the constant n, then restore the original order using the saved indices.

 6.Time Complexity : O(nlogn)
 7.Space Complexity: O(n)

 8.Problem Link: ( https://codeforces.com/problemset/problem/1857/E )
======================================================================
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<pair<ll, int>> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i].first;
        x[i].second = i; 
    }

    sort(x.begin(), x.end());

    vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + x[i].first;
    }

    vector<ll> results(n);
    for (int i = 0; i < n; i++) {
        ll current_x = x[i].first;

        ll left_sum = (current_x * (i + 1)) - pref[i + 1];

        ll right_sum = (pref[n] - pref[i + 1]) - (current_x * (n - 1 - i));

        results[x[i].second] = left_sum + right_sum + n;
    }

    for (int i = 0; i < n; i++) {
        cout << results[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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