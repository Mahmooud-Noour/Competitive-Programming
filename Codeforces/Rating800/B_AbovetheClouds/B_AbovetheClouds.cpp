
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 0; cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		string St;
		cin >> St;
		bool A = false;
		unordered_map<char, int>Mp;
		for (int i = 1; i < n - 1; i++) {
			Mp[St[i]]++;
			if (Mp[St[i]] > 1 || St[i] == St[0] || St[i] == St[n - 1]) {
				A = true;
				break;
			}
		}
		if (A) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;

}