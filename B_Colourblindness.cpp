#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int b;
    string c;
    string d;
    cin >> b >> c >> d;
    for (int i = 0; i < b; i++)
    {
        if (c[i] == 'R' && d[i] != 'R' || d[i] == 'R' && c[i] != 'R')
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