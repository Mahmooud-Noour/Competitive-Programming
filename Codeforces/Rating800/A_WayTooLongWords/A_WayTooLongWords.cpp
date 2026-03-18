#include <iostream>
#include <string>
using namespace std;

string BriefWord(string LongWord)
{
    return LongWord[0] + to_string(LongWord.length() - 2) + LongWord[LongWord.length() - 1];
}
int main()
{
    int n; cin >> n;
    while (n--)
    {
        string Word; cin >> Word;
        if (Word.length() > 10) cout << BriefWord(Word) << endl;
        else cout << Word << endl;
    }
}
