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
        string c;
        cin >> c;
        int c2 = 0, c1 = 0;
        sort(c.begin(), c.end());
        for (int j = 0; j < b; j++)
        {
            if (c[j] == c[j + 1])
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        cout << (c2 * 2) + c1 << endl;
    }
    return 0;
}