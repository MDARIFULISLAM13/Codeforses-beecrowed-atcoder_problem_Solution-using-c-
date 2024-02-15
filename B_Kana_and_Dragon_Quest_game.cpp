#include <bits/stdc++.h>
using namespace std;

void arif()
{
    long long int b, c, d;
    cin >> b >> c >> d;

    if (b - (d * 10) < 1)
    {
        cout << "YES\n";
    }
    else
    {
        while (c--)
        {

            b = (b / 2) + 10;
        }
        while (d--)
        {
            b = b - 10;
        }
        if (b > 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        arif();
    }
}