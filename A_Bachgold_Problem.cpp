#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << a / 2 << endl;
        for (int i = 1; i <= a / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    else
    {
        cout << a / 2 << endl;
        for (int i = 1; i < a / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
}