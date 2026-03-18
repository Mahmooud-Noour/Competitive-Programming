
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Solve()
{
	int n; cin >> n;
	vector<int> V(n);

	for (int i = 0; i < n; i++)
		cin >> V[i];

	sort(V.begin(), V.end());
	int i = 0;

	if ((V[i] + V[n - 1]) % 2 == 0)
	{
		cout << 0 << "\n";
		return;
	}

	for (i = 1; i < n; i++)
	{
		if ((V[i] + V[n - 1]) % 2 == 0 || (V[1] + V[n - 1 - i]) % 2 == 0)
			break;

	}
	cout << i << "\n";

	return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;

	while (t--) Solve();

	return  0;
}