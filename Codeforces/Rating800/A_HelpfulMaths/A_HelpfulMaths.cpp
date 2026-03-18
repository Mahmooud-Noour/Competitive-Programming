
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string St; cin >> St;
	int Num[St.size()];
	int counter = 0;
	for (int i = 0; i < St.size(); i++)
	{
		if (St[i] != '+')
		{
			Num[counter] = St[i];
			counter++;
		}
	}
	sort(Num, Num + counter);

	for (int j = 0; j < counter; j++)
	{
		if (j != 0)
		{
			cout << "+";
		}

		cout << char(Num[j]);
	}
	return 0;
}