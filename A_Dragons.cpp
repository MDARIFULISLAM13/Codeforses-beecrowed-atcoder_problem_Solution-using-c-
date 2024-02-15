#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c[b], d[b];
    for (int i = 0; i < b; i++)
    {

        cin >> c[i] >> d[i];
    }
    sort(c, c + b);

    for (int i = 0; i < b; i++)
    {
        a += d[i];
        if (c[i] > a)
        {
            cout << "NO\n";

            return 0;
        }
    }
    cout << "YES\n";
}