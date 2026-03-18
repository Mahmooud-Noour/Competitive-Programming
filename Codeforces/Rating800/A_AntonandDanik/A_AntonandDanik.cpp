#include <iostream>
using namespace std;

int main()
{
	int n, DCountre = 0, ACountre = 0;
	string s;

	cin >> n;
	cout << "\n";
	cin >> s;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'A')
			ACountre++;
		else
			DCountre++;
	}
	if (ACountre > DCountre)
		cout << "Anton\n";
	else if (DCountre > ACountre)
		cout << "Danik\n";
	else
		cout << "Friendship\n";


	return 0;
}