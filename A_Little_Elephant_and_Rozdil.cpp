#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    fastread();
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;
    cin >> n;
    ll min = 1e18, p = 0, mc = 1, b = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> b;
        if (b < min)
        {
            min = b;
            p = i;
            mc = 1;
        }
        else if (b == min)
        {
            mc += 1;
        }
    }
    if (mc > 1)
    {
        cout << "Still Rozdil\n";
    }
    else
    {
        cout << p << "\n";
    }
}