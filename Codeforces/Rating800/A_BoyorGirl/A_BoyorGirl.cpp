#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin >> st;
    int size = st.size(), counter = 0;
    sort(st.begin(), st.end());
    for (int i = 0; i < size; i++)
    {
        if (st[i] == st[i + 1])
            counter++;
    }

    int ans = size - counter;
    if (ans % 2 == 0) cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}
