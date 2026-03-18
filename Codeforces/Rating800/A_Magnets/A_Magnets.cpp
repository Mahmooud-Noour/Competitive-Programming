#include <iostream>

using namespace std;

int main()
{
    string St;
    char A = '\0';
    int n, Counter = 1; cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> St;
        if (St[0] == A)
            Counter++;

        A = St[1];
    }
    cout << Counter;
    return 0;
}