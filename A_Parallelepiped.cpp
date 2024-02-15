#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{

    ll a, b, c;
    cin >> a >> b >> c;
    ll a1 = sqrt((a * b) / c);
    ll a2 = sqrt((b * c) / a);
    ll a3 = sqrt((a * c) / b);
    ll ans = 4 * (a1 + a2 + a3);
    cout << ans << endl;
}