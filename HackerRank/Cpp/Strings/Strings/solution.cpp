/*
====================================================
 Problem   : Strings
 Platform  : HackerRank
 Domain    : Strings
 Difficulty: Easy

 Approach:

* Read two strings `a` and `b` from input
* Print their lengths separated by a space
* Print the concatenation of `a` and `b`
* Swap the first characters of `a` and `b`
* Print the modified strings separated by a space


====================================================
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	

	string a, b;
	cin >> a >> b;

	cout << a.size() << " " << b.size() << "\n";

	cout << a + b << "\n";
	char c = a[0], d = b[0];
	a[0] = d; b[0] = c;
	cout << a << " " << b << "\n";


	return 0;
}