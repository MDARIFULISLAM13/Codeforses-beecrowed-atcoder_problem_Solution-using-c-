#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        string s;
        cin >> s;
        ll count = a;
        for (ll i = 0; i < a / 2; i++)
        {
            if (s[i] != s[a - i - 1])
            {
                count -= 2;
            }
            else
            {

                break;
            }
        }
        cout << count << endl;
    }
}