#include <bits/stdc++.h>
using namespace std;

int cheek(long long int a[], long long int t, long long int n)
{
    long long int p = a[0];
    long long int count = 1;
    for (long long int i = 1; i < n; i++)
    {
        if (p + t <= a[i])
        {
            count++;
            p = a[i];
        }
    }
    return count;
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, d;
        cin >> n >> d;
        long long int a[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long int l = 0, h = 1e9, ans = 0;
        while (l <= h)
        {
            long long int mid = (l + h) / 2;
            long long int n_cnt = cheek(a, mid, n);
            if (n_cnt >= d)
            {
                l = mid + 1;
                ans = mid;
            }
            else
                h = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}
