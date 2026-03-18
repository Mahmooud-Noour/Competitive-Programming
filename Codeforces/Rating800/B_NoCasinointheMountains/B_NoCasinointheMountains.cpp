
#include <iostream>
#include <vector>

using namespace std;

void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> V(n);

    for (int i = 0; i < n; i++) cin >> V[i];

    int hikes = 0;
    int goodDays = 0;

    for (int i = 0; i < n; i++) {

        if (V[i] == 0)
        {
            goodDays++;

            if (goodDays == k)
            {
                hikes++;
                goodDays = 0;
                i++;
            }
        }
        else
        {
            goodDays = 0;
        }
    }
    cout << hikes << "\n";
}


int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) Solve();

    return 0;
}