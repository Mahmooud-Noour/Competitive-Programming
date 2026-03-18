/*
====================================================
 Problem   : Structs
 Platform  : HackerRank
 Domain    : Classes
 Difficulty: Easy

 Approach:

 * Define a `struct Student` with public members: `age`, `first_name`, `last_name`, and `standard`
* Read input values directly into the struct’s members
* Print the struct’s members in order, separated by spaces


====================================================
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}