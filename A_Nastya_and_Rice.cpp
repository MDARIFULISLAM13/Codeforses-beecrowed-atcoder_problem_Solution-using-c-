#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    fastread();
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        ll min = n * (a - b), max = n * (a + b);
        if (max < c - d || min > c + d)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
}