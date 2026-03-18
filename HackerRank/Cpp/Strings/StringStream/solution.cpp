/*
====================================================
 Problem   : StringStream
 Platform  : HackerRank
 Domain    : Strings
 Difficulty: Easy

 Approach:

 * Use a `stringstream` to parse the input string containing numbers separated by commas
* Read integers one by one from the stream, skipping the commas
* Store the integers in a vector
* Return the vector and print each integer on a new line

====================================================
*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> v;
    stringstream ss(str);

    int num;
    char comma;

    while (ss >> num)
    {
        v.push_back(num);
        ss >> comma;
    }
    return  v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

