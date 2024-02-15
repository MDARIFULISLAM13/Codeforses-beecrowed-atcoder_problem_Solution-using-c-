#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        int a, b, sum = 0, t1 = 0, t2 = 0;
        cin >> a;
        for (int i = 1; i <= a; i++)
        {
            cin >> b;
            if (b == 1)
            {
                t1++;
            }
            else
            {
                t2++;
            }
            sum += b;
        }
        if (sum % 2 != 0 || (a % 2 != 0 && t1 % 2 != 0) || (a % 2 != 0 && t1 == 0))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}