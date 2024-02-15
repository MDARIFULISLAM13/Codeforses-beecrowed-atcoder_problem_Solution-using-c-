#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int c, m = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> c;
            if (c == b)
            {
                m++;
            }
        }
        if (m != 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}