/*
======================================================================
 1.Problem  : B. Swap and Delete
 2.Platform : Codeforces
 3.Topic    : Strings
 4.Rating   : 1000 (Div. 2)

 5.Approach : 
  - Goal: Minimize the cost (number of deletions) to create a "good" string t where ti​=si​ for all i.
  - Key Insight: Since swaps are free and can be performed any number of times, we can rearrange any character we choose to keep into any position. The only limitation is the total count of '0's and '1's available in our "pool."

   - Greedy Strategy:
        -Frequency Count: First, count the total number of '0's and '1's in the original string s.
        -Linear Matching: Traverse the string s from left to right. For each character s[i], try to place the opposite character at that position to satisfy ti​=si​.
        -Pool Depletion: * If s[i] is '0', check if there is an available '1' in the pool. If yes, use it (decrement cnt1).
            - If s[i] is '1', check if there is an available '0' in the pool. If yes, use it (decrement cnt0).

     - Termination: As soon as we encounter a character s[i] whose opposite is no longer available in our pool, we must stop. Any characters remaining from that index i to the end of the string n must be deleted.

     - Result: The minimum cost is the number of characters we couldn't match, calculated as n - i. 
 
 6.Time Complexity : O(n)
 7.Space Complexity: O(1)

 8.Problem Link: ( https://codeforces.com/problemset/problem/1913/B )
======================================================================
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    
    int cnt0 = 0, cnt1 = 0;
    
    for (char c : s) {
        if (c == '0') cnt0++;
        else cnt1++;
    }
    
    int i = 0;
  
    for (i = 0; i < n; i++) {
        if (s[i] == '0') {
           
            if (cnt1 > 0) cnt1--;
            else break; 
        } else {
          
            if (cnt0 > 0) cnt0--;
            else break; 
        }
    }
    
    cout << n - i << endl;
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
    return 0;
}
