#include <bits/stdc++.h>
using namespace std;
int main()
{

    // there are many way to call constructor

    // 1.
    // string s = "Hello";

    // 2.
    // string s("Hello");

    // 3.
    // string s("Hello", 4); // output - Hell

    // 4.
    // string s = "Hello world";
    // string t(s, 3); // output - lo world

    // 5.
    string s(5, 'A'); // output - AAAAA

    cout << s << endl;

    return 0;
}