#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (b > a)
    {
        cout << "-1";
    }
    else if (b == a)
    {
        cout << a;
    }
    else
    {
        int c = a / 2;
        int e = 0;
        if (c % b != 0)
        {
            e = b - (c % b);
        }
        cout << c + e;
    }
}