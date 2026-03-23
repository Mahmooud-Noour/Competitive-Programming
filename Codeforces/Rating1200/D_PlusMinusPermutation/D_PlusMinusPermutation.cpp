/*
======================================================================
 1.Problem  : D. Plus Minus Permutation
 2.Platform : Codeforces
 3.Topic    : Math
 4.Rating   : 1200 (Div. 3)

 5.Approach : 
  - Goal: Maximize the score defined as (Sum at indices divisible by x)−(Sum at indices divisible by y).
    - Overlapping Indices: Indices divisible by both x and y (i.e., multiples of lcm(x,y)) cancel each other out in the final score. We calculate the number of such "common" indices and subtract them from the individual counts of x and y.

  - Greedy Assignment:
    	- Identify the number of unique x-positions (cnt_x) and unique y-positions (cnt_y).
    	- To maximize the result, assign the largest available integers from the range [1,n] to the x-positions.
    	- Assign the smallest available integers to the y-positions.
   - Mathematical Optimization: Instead of iterating, use the arithmetic progression sum formula:
			
			S=2k​(first+last)

    		- Sum X: Sum of cnt_x largest numbers from n down to (n−cnt_x+1).
    		- Sum Y: Sum of cnt_y smallest numbers from 1 up to cnt_y.

 6.Time Complexity : O(log(min(x,y)))
 7.Space Complexity: O(1)

 8.Problem Link: ( https://codeforces.com/problemset/problem/1872/D )
======================================================================
*/
#include <iostream>
#include <numeric>
using namespace std;
 
long long get_lcm(long long x, long long y) {
    return (x * y) / std::gcd(x, y);
}
 
void solve() {
    long long n, x, y;
    cin >> n >> x >> y;
 
    long long lcm = get_lcm(x, y);
 
    long long common = n / lcm;
    long long cnt_x = (n / x) - common;
    long long cnt_y = (n / y) - common;
 
    long long sum_x = (cnt_x * (n + (n - cnt_x + 1))) / 2;
 
    long long sum_y = (cnt_y * (1 + cnt_y)) / 2;
 
    cout << sum_x - sum_y << endl;
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