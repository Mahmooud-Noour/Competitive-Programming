
#include <iostream>
using namespace std;


void Solve()
{
	int n, i;
	cin >> n;
	int A[101];

	for (i = 0; i < n; i++) cin >> A[i];

	if (n == 1)
	{
		cout << "NO\n";
		return;
	}

	for (i = 0; i < n - 1; i++)
	{
		if (A[i] > A[i + 1])
		{
			cout << "YES\n";
			cout << 2 << "\n"
				<< A[i] << " " << A[i + 1] << "\n";
			return;
		}
	}

	cout << "No\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) Solve();

	return  0;
}