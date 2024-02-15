#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int e = max(a, max(b, c));
        int f = (e - a) + (e - b) + (e - c);
        int g = d - f;
        if (g % 3 == 0 && g >= 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}