#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        long long int b;
        cin >> b;
        while (b % 2 == 0)
        {
            b /= 2;
        }
        if (b == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}