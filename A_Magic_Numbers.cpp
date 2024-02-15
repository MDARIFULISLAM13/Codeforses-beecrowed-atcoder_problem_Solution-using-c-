#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a;
    cin >> a;
    int last = 0, max = 0;
    int d;
    while (a > 0)
    {
        d = a % 10;
        last = d;
        a /= 10;
        if (d != 4 && d != 1)
        {
            cout << "NO";

            return 0;
        }
        else if (d == 4)
        {
            max++;
            if (max == 3)
            {

                cout << "NO";

                return 0;
            }
        }
        else if (d == 1)
        {
            max = 0;
        }
    }
    if (last == 4)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
}