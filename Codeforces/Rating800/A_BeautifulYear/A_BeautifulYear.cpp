
#include <iostream>

using namespace std;

int main()
{
    int Year, A, B, C, D, Reminder = 0;
    cin >> Year;
    while (true)
    {
        Year += 1;
        A = Year / 1000;
        Reminder = Year % 1000;
        B = Reminder / 100;
        Reminder = Reminder % 100;
        C = Reminder / 10;
        Reminder = Reminder % 10;
        D = Reminder;
        if (A != B && A != C && A != D && B != C && B != D && C != D)
            break;

    }
    cout << Year;
    return 0;
}