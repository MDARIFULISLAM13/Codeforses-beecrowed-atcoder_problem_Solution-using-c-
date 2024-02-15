#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b;
    for (int i = 1; i <= a; i++)
    {
        cin >> b;
        int c = b / 2;
        if (c % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES\n";
            for (int j = 1; j <= c; j++)
            {
                cout << j * 2 << " ";
            }
            for (int j = 1; j < c; j++)
            {
                cout << (j * 2) - 1 << " ";
            }
            cout << ((c * 2) + c) - 1 << endl;
        }
    }
}