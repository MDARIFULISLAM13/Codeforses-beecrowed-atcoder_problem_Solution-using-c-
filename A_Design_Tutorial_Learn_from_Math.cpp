#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << a / 2 << " " << a / 2;
    }
    else
    {
        int d = a / 2;
        d = d - 1;
        a = a - d;
        cout << d << " " << a;
    }
}