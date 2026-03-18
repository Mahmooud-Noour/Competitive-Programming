#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin >> t;
	while (t--) {
		ll n, j, k;
		cin >> n >> j >> k;
		vector<ll> a(n + 5);
		ll ma = -1;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			ma = max(ma, a[i]);
		}
		ll s = a[j];
		if (k > 1 || s == ma) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}