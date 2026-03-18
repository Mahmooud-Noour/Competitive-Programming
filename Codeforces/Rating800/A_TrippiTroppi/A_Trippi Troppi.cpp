#include <iostream>
#include <string>
using namespace std;
string CountryModern(string countryOld)
{
    string countryModern = "";
    countryModern.push_back(countryOld[0]);
    for (int i = 0; i + 1 < countryOld.size(); i++)
    {
        if (countryOld[i] == ' ')
            countryModern.push_back(countryOld[i + 1]);
    }
    return countryModern;
}


int main()
{
    int t; cin >> t;
    cin.ignore();
    while (t--)
    {
        string s; getline(cin, s);
        cout << CountryModern(s) << endl;
    }
}