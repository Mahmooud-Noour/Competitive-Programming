#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n % 3 == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            for (int i = 1; ; i++)
            {
                if ((n + i) % 3 == 0)
                {
                    cout << i << "\n";
                    break;

                }
            }
        }
    }
    return 0;
}
