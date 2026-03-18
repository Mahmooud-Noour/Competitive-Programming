#include <bits/stdc++.h>

using namespace std;

int main()
{
    int S1, S2, S3, S4;
    cin >> S1 >> S2 >> S3 >> S4;
    set <int> Num;
    Num.insert(S1);
    Num.insert(S2);
    Num.insert(S3);
    Num.insert(S4);
    cout << 4 - Num.size();

    return 0;
}