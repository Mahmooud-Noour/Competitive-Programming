#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    int Arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    sort(Arr, Arr + n);
    for (int K : Arr)
    {
        cout << K << " ";

    }

    return 0;
}