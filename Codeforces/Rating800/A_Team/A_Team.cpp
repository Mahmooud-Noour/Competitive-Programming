#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    int Count = 0;
    while (t--)
    {
        int a, b, c; cin >> a >> b >> c;
        if (2 <= a + b + c)
            Count++;
    }
    cout << Count << endl;
}
