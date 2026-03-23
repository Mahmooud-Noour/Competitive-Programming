/*
======================================================================
 1.Problem  : C. Constanze's Machine
 2.Platform : Codeforces
 3.Topic    : DB
 4.Rating   : 1400 (Div.2)

 5.Approach : 
  - Goal: Calculate the total number of ways to interpret a string where "uu" could have been a 'w' and "nn" could have been an 'm'.
     - Validation: The machine never inscribes 'w' or 'm'. If the input string contains either, the answer is 0.
     - Combinatorial Logic: For any contiguous block of k identical characters ('u's or 'n's), we need to find how many ways we can partition them into groups of size 1 or 2.
    - If we take the last character as a single, there are f(k−1) ways.
    - If we take the last two characters as a pair (representing 'w' or 'm'), there are f(k−2) ways.
    - This relationship defines the Fibonacci sequence: f(k)=f(k−1)+f(k−2).
 - Implementation:
	1. Precompute Fibonacci numbers up to length n.
	2. Scan the string to find the lengths of all contiguous segments of 'u's and 'n's.
	3. Multiply the Fibonacci values of these lengths together to get the final result, applying modulo 10pow(9)+7 at each step.

 6.Time Complexity : O(n)
 7.Space Complexity: O(n)

 8.Problem Link: ( https://codeforces.com/problemset/problem/1245/C )
======================================================================
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.length();

    for (char c : s) {
        if (c == 'w' || c == 'm') {
            cout << 0 << endl;
            return 0;
        }
    }

    vector<long long> fib(n + 1);
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
        fib[i] = (fib[i - 1] + fib[i - 2]) % MOD;
    }

    long long ans = 1;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'u' || s[i] == 'n') {
            int count = 0;
            char target = s[i];
            while (i < n && s[i] == target) {
                count++;
                i++;
            }
            i--;            
            ans = (ans * fib[count]) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}