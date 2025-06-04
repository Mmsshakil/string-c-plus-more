#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
        string s;
        getline(cin, s);

        stringstream s2(s);
        string word1, word2;

        s2 >> word1;
        s2 >> word2;

        int minSize = min(word1.size(), word2.size());
        int otherValue = 1;

        for (int i = 0; i < minSize; i++)
        {
            cout << word1[i] << word2[i];
            otherValue++;
        }

        if (word1.size() > word2.size())
        {
            for (int i = otherValue - 1; i < word1.size(); i++)
            {
                cout << word1[i];
            }
        }
        else
        {
            for (int i = otherValue - 1; i < word2.size(); i++)
            {
                cout << word2[i];
            }
        }

        cout << endl;
    }

    return 0;
}