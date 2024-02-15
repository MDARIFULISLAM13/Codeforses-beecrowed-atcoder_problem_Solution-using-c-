#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    long long q;
    scanf("%d %lld", &n, &q);
    long long a[n + 1];

    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }

    long long num, f, t;
    while (q--)
    {
        scanf("%lld %lld %lld", &num, &f, &t);

        if (num == 1)
        {
            long long min = LLONG_MAX;
            for (int i = f; i <= t; i++)
            {
                if (a[i] < min)
                {
                    min = a[i];
                }
            }
            printf("%lld\n", min);
        }
        else if (num == 2)
        {
            long long max = a[f];
            for (int i = f; i <= t; i++)
            {
                if (a[i] > max)
                {
                    max = a[i];
                }
            }
            printf("%lld\n", max);
        }
        else if (num == 3)
        {
            long long sum = 0;
            for (int i = f; i <= t; i++)
            {
                sum += a[i];
            }
            printf("%lld\n", sum);
        }
    }

    return 0;
}