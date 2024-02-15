#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (b % 10 == 0 && a == 1)
    {
        cout << "-1" << endl;
    }
    else if (b % 10 == 0 && a != 1)
    {
        for (int i = 1; i < a; i++)
        {
            cout << 1;
        }
        cout << 0 << endl;
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            cout << b;
        }
        cout << endl;
    }
}