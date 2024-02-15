#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int b;
    cin >> b;
    string c;
    cin >> c;
    sort(c.begin(), c.end());
    int d = c[b - 1] - 96;
    cout << d << endl;
    return;
}
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        arif();
    }
}