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
        ll sum = (n * (n + 1)) / 2;
        for (ll i = 1; i <= n; i *= 2)
        {
            sum -= i * 2;
        }
        cout << sum << endl;
    }
}