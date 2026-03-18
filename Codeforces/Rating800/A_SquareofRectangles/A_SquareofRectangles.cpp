
#include <iostream>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int L1, B1, L2, B2, L3, B3;
		cin >> L1 >> B1 >> L2 >> B2 >> L3 >> B3;
		if (L1 == L2 && L1 == L3 && L1 == B1 + B2 + B3) cout << "YES\n";

		else if (B1 == B2 && B1 == B3 && B1 == L1 + L2 + L3) cout << "YES\n";

		else if (L2 + L3 == L1 && B2 == B3 && B1 + B2 == L1) cout << "YES\n";

		else if (B2 + B3 == B1 && L2 == L3 && L1 + L2 == B1) cout << "YES\n";

		else cout << "NO\n";
	}

	return  0;
}