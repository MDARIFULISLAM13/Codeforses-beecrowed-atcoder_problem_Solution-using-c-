#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (c - c % a + b <= c)
        {
            cout << c - c % a + b << endl;
        }
        else
        {
            cout << c - c % a - (a - b) << endl;
        }
    }
}