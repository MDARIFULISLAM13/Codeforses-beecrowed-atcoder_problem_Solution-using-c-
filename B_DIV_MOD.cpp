#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll max1 = (b / c) + (b % c);
        ll max2 = 0;
        ll d = b - (b % c);
        d = d - 1;
        if (d >= a)
        {
            max2 = (d / c) + (d % c);
        }
        cout << max(max1, max2) << endl;
    }
}