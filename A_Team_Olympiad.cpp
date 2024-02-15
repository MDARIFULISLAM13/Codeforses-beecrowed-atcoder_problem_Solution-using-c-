#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b[a];
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    for (int i = 1; i <= a; i++)
    {
        cin >> b[i];
        if (b[i] == 1)
        {
            a1++;
        }
        else if (b[i] == 2)
        {
            a2++;
        }
        else
        {
            a3++;
        }
    }
    int c = min(a1, min(a2, a3));
    cout << c << endl;
    for (int i = 1; i <= c; i++)
    {
        int x = 0, y = 0, z = 0;
        for (int j = 1; j <= a; j++)
        {
            if (b[j] == 1 && x == 0)
            {
                cout << j << " ";
                b[j] = 5;
                x = 1;
            }
        }
        for (int j = 1; j <= a; j++)
        {
            if (b[j] == 2 && y == 0 && x == 1)
            {
                cout << j << " ";
                b[j] = 5;
                y = 1;
            }
        }
        for (int j = 1; j <= a; j++)
        {
            if (b[j] == 3 && z == 0 && y == 1)
            {
                cout << j << endl;
                b[j] = 5;
                z = 1;
            }
        }
    }
}