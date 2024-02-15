#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, k;
        cin >> a >> b >> k;
        ll odd = k / 2, even = k / 2;
        if (k % 2 != 0)
        {
            odd += 1;
        };
        ll sum = 0;
        sum += (odd * a);
        sum -= (even * b);
        cout << sum << endl;
    }
}