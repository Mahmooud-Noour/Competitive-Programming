
#include <iostream>
using namespace std;

int main()
{

	int n; cin >> n;
	int i;

	int  s[1001];
	for (int j = 1; j <= n; j++)
	{
		cin >> i;
		s[i] = j;
	}

	for (int j = 1; j <= n; j++)
	{
		cout << s[j] << " ";
	}
	cout << endl;

	return   0;

}