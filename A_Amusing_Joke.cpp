#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    string d;
    d.insert(d.end(), a.begin(), a.end());
    d.insert(d.end(), b.begin(), b.end());
    sort(d.begin(), d.end());
    sort(c.begin(), c.end());
    if (c.compare(d) == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}