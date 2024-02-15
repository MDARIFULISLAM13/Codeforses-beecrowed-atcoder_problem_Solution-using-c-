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
        int count = 0, coun = 0;
        for (int j = 1; j <= b; j++)
        {
            int c;
            cin >> c;
            if (c % 2 == 0)
            {
                count += c;
            }
            else
            {
                coun += c;
            }
        }
        if (count > coun)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}