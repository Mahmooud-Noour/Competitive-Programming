#include <bits/stdc++.h>

using namespace std;

int main()
{
    string St1, St2;
    cin >> St1 >> St2;
    for (int i = 0; i < St1.size(); i++)
    {
        int Num1 = tolower(St1[i]);
        int Num2 = tolower(St2[i]);
        if (Num1 != Num2)
        {

            if (Num1 < Num2)
            {
                cout << -1 << endl;
                return 0;
            }
            else
            {
                cout << 1 << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;
    return 0;
}