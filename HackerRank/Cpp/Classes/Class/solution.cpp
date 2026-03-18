/*
====================================================
 Problem   : Class
 Platform  : HackerRank
 Domain    : Classes
 Difficulty: Easy

 Approach:

* Define a `Student` class with private attributes: age, first name, last name, and standard
* Provide public getter and setter methods for each attribute
* Implement a `to_string()` method to return all attributes as a single comma-separated string
* In `main()`, create a `Student` object, set its attributes, and use the getters and `to_string()` to print values


====================================================
*/

#include <iostream>
#include <sstream>
using namespace std;

class Student
{
private:
    int _age;
    string _first_name;
    string _last_name;
    int _standard;

public:
    void set_age(int age)
    {
        _age = age;
    }
    int get_age()
    {
        return _age;
    }
    void set_first_name(string FirstName)
    {
        _first_name = FirstName;
    }
    string get_first_name()
    {
        return _first_name;
    }
    void set_last_name(string LastName)
    {
        _last_name = LastName;
    }
    string get_last_name()
    {
        return _last_name;
    }
    void set_standard(int Standard)
    {
        _standard = Standard;
    }
    int get_standard()
    {
        return _standard;
    }
    string to_string()
    {
        stringstream ss;
        char comma = ',';
        ss << _age << comma << _first_name << comma << _last_name << comma << _standard;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}