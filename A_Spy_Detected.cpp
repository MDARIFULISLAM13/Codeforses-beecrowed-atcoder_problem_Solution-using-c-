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
        int c[b];
        int mil = 0;
        int output = 0;
        for (int i = 1; i <= b; i++)
        {
            cin >> c[i];
        }
        for (int i = 1; i <= b; i++)
        {
            if (c[i] == c[i + 1] || c[i] == c[i + 2])
            {
                mil = c[i];
                break;
            }
            else
            {
                mil = c[i + 1];
                break;
            }
        }
        for (int i = 1; i <= b; i++)
        {
            if (c[i] != mil)
            {
                cout << i << "\n";
                break;
            }
        }
    }
}