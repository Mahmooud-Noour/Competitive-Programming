#include <iostream>
using namespace std;

int n;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    if (n == 0)
    {
        cout << 1 << endl; return 0;
    }

    int  last[] = { 8 , 4 , 2 , 6 };
    cout << last[(n - 1) % 4] << endl;
    return 0;
}