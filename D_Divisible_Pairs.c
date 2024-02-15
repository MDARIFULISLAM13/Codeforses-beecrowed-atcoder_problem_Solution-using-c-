#include <stdio.h>
#include <stdlib.h>

int cs(const int *a, int n, int x, int y)
{
    int *remainder_count_x = (int *)calloc(x, sizeof(int));
    int *remainder_count_y = (int *)calloc(y, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        remainder_count_x[a[i] % x]++;
        remainder_count_y[a[i] % y]++;
    }

    int b = 0;

    for (int i = 0; i < n; i++)
    {
        int complement_x = (x - (a[i] % x)) % x;
        int complement_y = (y - (a[i] % y)) % y;

        b += remainder_count_x[complement_x] * remainder_count_y[complement_y];
    }

    free(remainder_count_x);
    free(remainder_count_y);

    return b;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);

        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int rt = cs(a, n, x, y);
        printf("%d\n", rt);

        free(a);
    }

    return 0;
}
