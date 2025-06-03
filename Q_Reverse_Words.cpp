#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    stringstream s2(s);
    string word;

    s2 >> word;
    reverse(word.begin(), word.end());
    cout << word;

    while (s2 >> word)
    {
        reverse(word.begin(), word.end());
        cout << " " << word;
    }

    return 0;
}