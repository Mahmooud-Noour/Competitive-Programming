#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string Str;
    cin >> Str;
    for (int i = 0; i < Str.size(); i++)
    {

        if (Str[i] == 'H' || Str[i] == 'Q' || Str[i] == '9')
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}