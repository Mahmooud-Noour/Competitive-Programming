#include <iostream>
using namespace std;
int n; 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n ; 
    int num = 1378 % 10; 
    int ans = pow(num, n) % 10; 
    cout << ans << endl; 

}