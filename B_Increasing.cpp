#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int b;
    cin >> b;
    long long int c[b];
    for (int i = 0; i < b; i++)
    {
        cin >> c[i];
    }
    sort(c, c + b);

    for (int i = b - 1; i >= 0; i--)
    {

        if (c[i] == c[i - 1])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    int a;
    cin >> a;
    while (a--)
    {

        solve();
    }
}