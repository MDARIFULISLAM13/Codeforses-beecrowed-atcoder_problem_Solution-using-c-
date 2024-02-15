#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int j = 1; j <= a; j++)
    {
        string b;
        cin >> b;
        int max = 0;
        for (int i = 0; i < b.size(); i++)
        {
            int c = b[i] - 'a';
            if (i != c)
            {
                max++;
            }
        }
        if (max > 2)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}