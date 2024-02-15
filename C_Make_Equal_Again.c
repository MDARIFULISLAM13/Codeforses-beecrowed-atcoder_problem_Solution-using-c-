#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], i, s = 1, f = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (f == 0 && i > 0)
            {
                if (a[i] == a[i - 1])
                    s++;
                else
                    f = 1;
            }
        }

        int p = 1;
        for (i = n - 1; i > 0; i--)
        {
            if (a[i] == a[i - 1])
                p++;
            else
                break;
        }
        // printf("p=%d\n",p);
        int ans;
        int q = 1;
        if (a[0] == a[n - 1] && n != 1 && p != n)
            q = p + s;
        if (s >= p && s >= q)
            ans = n - s;
        else if (p >= s && p >= q)
            ans = n - p;
        else
            ans = n - q;
        printf("%d\n", ans);
    }
    return 0;
}