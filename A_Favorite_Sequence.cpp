#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int b;
        cin >> b;
        int c[b];
        for (int i = 0; i < b; i++)
        {
            cin >> c[i];
        }
        for (int i = 0; i < b / 2; i++)
        {
            cout << c[i] << " " << c[b - i - 1] << " ";
        }
        if (b % 2 != 0)
        {
            cout << c[(b / 2)];
        }
        cout << endl;
    }
}