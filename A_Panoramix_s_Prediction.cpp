#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int last = 0;
    for (int i = 2; i < b; i++)
    {
        if (b % i == 0)
        {
            cout << "NO\n";
            return 0;
        }
    }
    for (int i = a + 1; i <= b; i++)
    {
        if (last != 0)
        {
            break;
        }
        for (int j = 2; j <= i; j++)
        {
            if (i == j)
            {
                last = i;
                break;
            }

            if (i % j == 0)
            {
                break;
            };
        }
    }
    if (last == b)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO" << endl;
    }
}