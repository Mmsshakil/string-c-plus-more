#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;

    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }

    // here we can create a function inside a class
    void hello()
    {
        cout << "Hello from " << name << endl;
    }
};

int main()
{
    Student rahim("Rahim Mia", 75); // here we call the class and put value
    rahim.hello();                  // here we call the function that inside of the class

    Student sakib("Sakib Sajid", 73);
    sakib.hello();

    return 0;
}