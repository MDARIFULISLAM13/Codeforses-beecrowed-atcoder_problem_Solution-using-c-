#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int b;
        cin >> b;
        if (b >= 2020 && b % 2020 <= b / 2020)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}