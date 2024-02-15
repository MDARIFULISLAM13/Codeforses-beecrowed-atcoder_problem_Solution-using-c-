#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int b;
    cin >> b;
    string c;
    cin >> c;
    for (int i = 0; i < b; i++)
    {
        if (c[i] == '0')
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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