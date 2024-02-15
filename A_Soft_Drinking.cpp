#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;

    b = (b * c) / g;
    c = d * e;
    d = f / h;
    e = min(b, min(c, d));
    f = e / a;
    cout << f;
}