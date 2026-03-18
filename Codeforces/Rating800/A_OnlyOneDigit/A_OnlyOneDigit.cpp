#include<iostream>
using namespace std;

int SmallNumber(int Number)
{
    int SmallNumber = Number % 10;
    while (Number > 0)
    {
        int PremierNumber = Number % 10;
        if (PremierNumber < SmallNumber)
        {
            SmallNumber = PremierNumber;
        }
        Number = Number / 10;
    }

    return SmallNumber;
}


int main()
{
    int t; cin >> t;

    while (t--)
    {
        int Number; cin >> Number;

        cout << SmallNumber(Number) << endl;

    }



    return 0;
}