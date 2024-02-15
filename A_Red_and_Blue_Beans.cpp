#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, r;
        cin >> a >> b >> r;
        if ((max(a, b) > (min(a, b) * (r + 1))))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}
