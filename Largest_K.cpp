#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 2)
        {
            cout << b << endl;
        }
        else if (a - 1 == b)
        {
            cout << "1\n";
        }
        else if (a > 2 && a < b)
        {
            cout << b - a + 2 << endl;
        }
        else
        {
            cout << "0\n";
        }
    }
}