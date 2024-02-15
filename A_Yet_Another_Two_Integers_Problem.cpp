#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int b, c;
        cin >> b >> c;
        if (b == c)
        {
            cout << "0\n";
        }
        else
        {
            int d = abs(b - c);
            int e = (d / 10);
            if (d % 10 != 0)
            {
                e += 1;
            }
            cout << e << "\n";
        }
    }
}