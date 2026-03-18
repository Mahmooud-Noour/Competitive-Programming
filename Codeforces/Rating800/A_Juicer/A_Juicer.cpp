#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, b, d, o, sum, countEmpty;

    cin >> n >> b >> d;
    sum = 0; countEmpty = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> o;
        if (o <= b)
        {
            sum += o;
            if (sum > d)
            {
                countEmpty++;
                sum = 0;
            }
        }
    }
    cout << countEmpty << endl;
    return 0;
}