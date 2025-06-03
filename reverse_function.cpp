#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> s;

    reverse(arr, arr + n);       // reverse an array
    reverse(s.begin(), s.end()); // reverse a string

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << s << endl;

    return 0;
}