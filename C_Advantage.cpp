#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int b[a];
        int max[a];

        for (int i = 0; i < a; i++)
        {
            cin >> b[i];
            max[i] = b[i];
        }
        sort(max, max + a);
        int f = max[a - 1];
        int e = max[a - 2];
        for (int i = 0; i < a; i++)
        {
            if (b[i] == f)
            {
                cout << f - e << " ";
            }
            else
            {
                cout << b[i] - f << " ";
            }
        }
        cout << endl;
    }
}