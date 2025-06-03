#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    // here we can create a function inside a class
    void hello()
    {
        cout << "Hello from " << name << endl;
    }

    // we build a function that print total marks
    void totalMark()
    {
        int total = math + english;
        cout << "Total Mark of " << name << " : " << total << endl;
    }
};

int main()
{
    Student rahim("Rahim Mia", 75, 40, 23); // here we call the class and put value
    rahim.hello();                          // here we call the function that inside of the class

    Student sakib("Sakib Sajid", 73, 52, 33);
    sakib.totalMark(); // here we call the totalmark function for sakib object

    return 0;
}