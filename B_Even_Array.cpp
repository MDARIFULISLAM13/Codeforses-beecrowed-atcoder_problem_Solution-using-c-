#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll c1 = 0, c2 = 0, v;
        for (ll i = 0; i < n; i++)
        {
            cin >> v;
            if (i % 2 == 0)
            {
                if ((v % 2 != 0))
                {

                    c2++;
                }
            }
            else
            {
                if (v % 2 == 0)
                {
                    c1++;
                }
            }
        }
        if (c1 == c2)
        {
            cout << c1 << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }
}