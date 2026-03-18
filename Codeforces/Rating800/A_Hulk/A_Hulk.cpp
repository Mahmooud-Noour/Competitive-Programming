#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Num; cin >> Num;

    for (int i = 1; i <= Num; i++)
    {
        if (i != 1)
            cout << " that ";
        if (i % 2 == 0)
            cout << "I love";
        else
            cout << "I hate";
    }
    cout << " it";
    return 0;
}