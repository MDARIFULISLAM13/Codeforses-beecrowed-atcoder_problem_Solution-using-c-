#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int c[a];
    for (int i = 0; i < a; i++)
    {
        cin >> c[i];
    }
    while (b--)
    {
        int d;
        cin >> d;
        int l = 0, h = a - 1;
        int ans = 0, out = 0;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (c[mid] == d)
            {
                ans = c[mid];
                out = 1;
                break;
            }
            else if (c[mid] < d)
            {
                l = mid + 1;
            }
            else if (c[mid] > d)
            {
                h = mid - 1;
            }
        }
        if (out == 0)
        {
            cout << "-1\n";
        }
        else
        {
            int p = lower_bound(c, c + a, ans) - c;
            cout << p << "\n";
        }
    }
}