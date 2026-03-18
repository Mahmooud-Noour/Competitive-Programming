#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double x = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        x += x;
    }
    cout << fixed << setprecision(12) << x / n << endl;
    return 0;
}