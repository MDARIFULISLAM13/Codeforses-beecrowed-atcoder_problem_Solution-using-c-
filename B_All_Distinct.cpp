#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a;
    cin >> a;
    while (a--)
    {
        int b;
        cin >> b;
        int c[b];
        for (int i = 0; i < b; i++)
        {
            cin >> c[i];
        }
        sort(c, c + b);
        int count = 1;
        for (int i = 1; i < b; i++)
        {
            if (c[i] != c[i - 1])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}