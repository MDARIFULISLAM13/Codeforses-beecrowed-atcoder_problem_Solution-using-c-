#include <bits/stdc++.h>
using namespace std;
int arif(long long int c[], long long int b, long long int a)
{
    long long int count = 1, rsz = b;
    for (int i = 0; i < a; i++)
    {
        if (rsz >= c[i])
        {
            rsz -= c[i];
        }
        else
        {
            count++;
            rsz = b - c[i];
        }
    }

    return count;
}

int main()
{
    long long int t;
    cin >> t;
    int count = 0;
    while (t--)
    {
        count++;
        long long a, b;
        cin >> a >> b;
        long long int c[a], d = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> c[i];
            if (c[i] > d)
            {
                d = c[i];
            }
        }
        long long int low = d, high = 1e15, ans = 0;
        while (low <= high)
        {
            long long int mid = (low + high) / 2;
            if (arif(c, mid, a) <= b)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        cout << "Case " << count << ": " << ans << endl;
    }
}