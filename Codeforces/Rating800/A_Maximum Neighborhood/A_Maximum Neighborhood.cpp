#include <iostream>
using namespace std;
int t, a, b, c, d; 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (a == b && a == c && a == d) cout << "YES\n"; 
        else  cout << "NO\n"; 
    }
    return 0;
}