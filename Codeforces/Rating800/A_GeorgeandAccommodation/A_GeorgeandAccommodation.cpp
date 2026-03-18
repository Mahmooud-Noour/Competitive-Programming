#include <iostream>

using namespace std;

int main()
{
    int HM, persons, Area, counter = 0;
    cin >> HM;
    for (int i = 0; i < HM; i++)
    {
        cin >> persons >> Area;
        if (persons <= Area - 2)
            counter++;
    }
    cout << counter << endl;
    return 0;
}