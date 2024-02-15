#include <bits/stdc++.h>
using namespace std;

void arif()
{
    int b, c, d;
    cin >> b >> c >> d;
    string e;
    cin >> e;

    int count = 1;
    int out = 0;

    for (int i = 0; i < d - 1; i++)
    {
        if (e[i] == e[i + 1])
        {
            count++;
        }
        else if (count >= c)
        {
            count = 1;
        }
        else
        {
            if (out == 0)
            {
                cout << "NO\n";
                out = 1;
            }
            for (int j = 0; j < b; j++)
            {
                cout << e[i];
            }
            count = 1;
            cout << endl;
        }
    }

    if (count >= c)
    {
        cout << "NO\n";
        out = 1;
    }
    else if (out != 1)
    {
        cout << "YES\n";
    }
}

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        arif();
    }
    return 0;
}
