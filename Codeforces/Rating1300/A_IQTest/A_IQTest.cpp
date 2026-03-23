/*
======================================================================
 1.Problem  : A. IQ test
 2.Platform : Codeforces
 3.Topic    : Brute force 
 4.Rating   : 1300 (Div.2)

 5.Approach : 
  - Goal: Find the 1-based index of the single number that has a different parity (even or odd) than the rest of the sequence.
  - Tracking: Maintain two counters (even_count, odd_count) and two variables to store the most recent indices where an even or odd number was found (last_even_idx, last_odd_idx).
  - Iteration: Perform a single pass through the n numbers. For each number, check if it is even or odd using the modulo operator (a % 2).
  - Identification: Based on the problem guarantee that exactly one number differs, check which counter equals 1 at the end. Output the index associated with that specific counter.

 6.Time Complexity : O(n)
 7.Space Complexity: O(1)

 8.Problem Link: (https://codeforces.com/problemset/problem/25/A )
======================================================================
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int even_count = 0, odd_count = 0;
    int last_even_idx = -1, last_odd_idx = -1;

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (a % 2 == 0) {
            even_count++;
            last_even_idx = i;
        } else {
            odd_count++;
            last_odd_idx = i;
        }
    }

    if (odd_count == 1) {
        cout << last_odd_idx << endl;
    } else {
        cout << last_even_idx << endl;
    }

    return 0;
}