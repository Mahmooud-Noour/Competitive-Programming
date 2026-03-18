#include <iostream>
using namespace std;
int n, h, sum, a[2001];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> h;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > h)
            sum += 2;
        else
            sum++;
    }
    cout << sum << endl;
    return 0;
}