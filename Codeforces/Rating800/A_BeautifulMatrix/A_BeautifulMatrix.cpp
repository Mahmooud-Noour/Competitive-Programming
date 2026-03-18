
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ans = 0;
    int element;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> element;
            if (element == 1)
            {
                ans = abs(i - 3) + abs(j - 3);
            }
        }
    }
    cout << endl << ans << endl;
    return 0;
}

