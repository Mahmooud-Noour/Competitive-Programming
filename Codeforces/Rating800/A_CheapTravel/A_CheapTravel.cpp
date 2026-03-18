
#include <iostream>
using namespace std; ;

int main()
{
	int n, m, a, b;
	cin >> n >> m >> a >> b;

	if (m > n && n * a > b)
	{
		cout << b;
		return 0;
	}

	if (n % m == 0)
	{
		if (n * a < (n / m) * b)
			cout << n * a << endl;
		else
			cout << (n / m) * b;
	}

	else
	{
		if (n * a < (n / m) * b + (n % m) * a)
			cout << n * a << endl;
		else if ((n / m) * b + (n % m) * a < (n / m) * b + (n % m) * b)
			cout << (n / m) * b + (n % m) * a;
		else
			cout << (n / m) * b + b;

	}

	return 0;
}