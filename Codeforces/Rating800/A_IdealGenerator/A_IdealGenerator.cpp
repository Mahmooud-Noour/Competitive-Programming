#include <iostream>
using namespace std;
bool OddNumber(int Num) { return (Num % 2 != 0); }
int main()
{
    int t; cin >> t;
    while (t--) { int k; cin >> k; if (OddNumber(k)) cout << "YES\n"; else cout << "NO\n"; }
}
