

#include <iostream>
using namespace std;

int main()
{
	int Number, k; cin >> Number >> k;
	while (k--)
	{
		if (Number % 10 == 0)
			Number = Number / 10;
		else
			Number--;
	}
	cout << Number;
}
