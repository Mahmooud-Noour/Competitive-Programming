
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	string He = "hello";
	int Countre = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == He[Countre])
			Countre++;
	}
	if (Countre == 5)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}