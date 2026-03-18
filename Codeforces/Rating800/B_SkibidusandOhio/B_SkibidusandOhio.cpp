#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--)
    {
        string s = "";
        cin >> s;

        bool hasEqual = false;

        for (int i = 0; i < (int)s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
                hasEqual = true;
        }

        if (hasEqual)
            cout << 1 << endl;
        else
            cout << s.size() << endl;

    }

    return 0;
}