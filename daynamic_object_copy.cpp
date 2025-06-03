#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string country;
    int jersy;

    Cricketer(string country, int jersy)
    {
        this->country = country;
        this->jersy = jersy;
    }
};

int main()
{
    // Cricketer sakib("Bangladesh", 75);

    Cricketer *sakib = new Cricketer("Bangladesh", 75);
    Cricketer *tamim = new Cricketer("Bangladesh", 62);

    // sakib = tamim; // this will not work it will show segmentation fault

    // sakib->country = tamim->country;  // we can use this way
    // sakib->jersy = tamim->jersy;

    *sakib = *tamim; // this way we can copy all data from another object to other

    delete tamim;

    cout << sakib->country << " " << sakib->jersy << endl;

    return 0;
}