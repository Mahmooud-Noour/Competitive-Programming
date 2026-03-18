#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int l, a, b;
        cin >> l >> a >> b;

        int cur = a, ans = a;
        do 
        {
            cur = (cur + b) % l;
            ans = max(ans, cur);
        } while (cur != a);

        cout << ans << '\n';
    }
    return 0;
}
