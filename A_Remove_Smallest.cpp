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
        ll d = 0;
        ll p = 0, v[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v, v + n);
        p = v[0];
        for (ll i = 1; i < n; i++)
        {
            if ((v[i] - p) > d)
            {
                d = (v[i] - p);
            }
            p = v[i];
        }

        if (d < 2 || n == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}