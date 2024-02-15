#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        long long int b, c;
        cin >> b >> c;
        if (b == 1)
        {
            cout << 0 << endl;
        }
        else if (b == 2 && c == 2)
        {
            cout << b << endl;
        }
        else if (b == c)
        {
            cout << b * 2 << endl;
        }
        else if (c > b)
        {
            cout << c << endl;
        }
    }
}