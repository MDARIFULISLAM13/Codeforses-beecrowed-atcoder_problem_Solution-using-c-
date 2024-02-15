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
        if (b % 2 == 0)
        {
            cout << b / 2 << endl;
        }
        else
        {
            cout << b / 2 + 1 << endl;
        }
    }
}