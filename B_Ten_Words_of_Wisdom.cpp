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
        int b[a], q[a];
        for (int i = 0; i < a; i++)
        {
            cin >> b[i] >> q[i];
        }
        int max = 0;
        int out = 0;
        for (int i = 0; i < a; i++)
        {
            if (q[i] > max && b[i] < 11)
            {
                max = q[i];
                out = i + 1;
            }
        }
        cout << out << endl;
    }
}