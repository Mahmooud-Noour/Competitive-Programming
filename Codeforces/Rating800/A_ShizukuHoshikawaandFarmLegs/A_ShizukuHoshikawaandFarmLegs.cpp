#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int t = 0;
    cin >> t;

    while (t--)
    {

        int Num;
        cin >> Num;

        if (Num % 2 == 0)
            cout << (Num / 4) + 1 << endl;

        else
            cout << 0 << endl;
    }
    return 0;
}