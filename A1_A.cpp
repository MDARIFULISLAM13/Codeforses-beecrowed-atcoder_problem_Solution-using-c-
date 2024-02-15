#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, q;
    int test = 0;
    while (1)
    {
        cin >> n >> q;
        if (n == 0)
        {
            break;
        }
        cout << "CASE# " << ++test << ":\n";
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        while (q--)
        {
            int x;
            cin >> x;

            int l = 0, h = n - 1;
            int ans = 0;
            int anss = 0;
            int ansss = 0;
            while (l <= h)

            {
                int mid = (l + h) / 2;
                if (a[mid] == x)
                {
                    anss = mid;
                    ansss = x;

                    ans = 1;
                    break;
                }
                else if (a[mid] < x)
                {
                    l = mid + 1;
                }
                else if (a[mid] > x)
                {
                    h = mid - 1;
                }
            }
            if (ans == 0)
            {
                cout << x << " not found\n";
            }
            else
            {
                int p = lower_bound(a, a + n, ansss) - a;

                cout << x << " found at " << p + 1 << "\n";
            }
        }
    }
}
