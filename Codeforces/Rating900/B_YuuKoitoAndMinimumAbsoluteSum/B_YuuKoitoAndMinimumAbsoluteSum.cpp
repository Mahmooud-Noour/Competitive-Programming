/*
======================================================================
 1.Problem  : B. Yuu Koito and Minimum Absolute Sum
 2.Platform : Codeforces
 3.Topic    : Math 
 4.Rating   : 900 (Div. 3)

 5.Approach : 
   - Mathematical Insight: The sum of the difference array b is a telescoping sum:
              i=1∑n−1  ​bi​=(a2​−a1​)+(a3​−a2​)+⋯+(an​−an−1​)=an​−a1​
         Thus, the problem reduces to minimizing ∣an​−a1​∣.
    - Minimizing the Difference:
         -If both a1​ and an​ are −1, set both to 0 to get a difference of 0.
         -If only one is −1, set it equal to the other (e.g., if an​ is known, set a1​=an​) to get a difference of 0.
         -If both are already provided, the minimum difference is fixed as ∣an​−a1​∣.
    - Lexicographical Requirement: To ensure the array is the smallest possible, all remaining −1 values at indices 2 to n−1 should be set to 0 (the smallest non-negative integer).
 
 6.Time Complexity : O(n)
 7.Space Complexity: O(n)

 8.Problem Link: ( https://codeforces.com/problemset/problem/2171/B )
======================================================================
*/
#include <iostream>
#include <vector>
#include <cmath>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    if (a[0] == -1 && a[n - 1] == -1) {
        a[0] = 0;
        a[n - 1] = 0;
    } else if (a[0] == -1) {
        a[0] = a[n - 1];
    } else if (a[n - 1] == -1) {
        a[n - 1] = a[0];
    }
 
    long long min_diff = abs(a[n - 1] - a[0]);
 
    for (int i = 0; i < n; i++) {
        if (a[i] == -1) a[i] = 0;
    }
 
    cout << min_diff << "\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
