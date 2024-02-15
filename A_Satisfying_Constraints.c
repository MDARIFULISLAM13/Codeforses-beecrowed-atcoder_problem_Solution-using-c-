#include <stdio.h>
#include <limits.h>

int countSatisfyingIntegers(int n, int constraints[][2])
{
    int min_val = INT_MIN;
    int max_val = INT_MAX;
    int not_equal_vals[n];
    int not_equal_count = 0;

    for (int i = 0; i < n; ++i)
    {
        int a = constraints[i][0];
        int x = constraints[i][1];

        if (a == 1)
        {
            min_val = (min_val > x) ? min_val : x;
        }
        else if (a == 2)
        {
            max_val = (max_val > x) ? x - 1 : max_val; // Adjust max_val to handle exclusive upper bound
        }
        else
        {
            not_equal_vals[not_equal_count++] = x;
        }
    }

    int count = (max_val - min_val + 1 > 0) ? max_val - min_val + 1 : 0;

    for (int i = 0; i < not_equal_count; ++i)
    {
        if (not_equal_vals[i] >= min_val && not_equal_vals[i] <= max_val)
        {
            count--;
            break;
        }
    }

    return count;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; ++i)
    {
        int n;
        scanf("%d", &n);

        int constraints[n][2];
        for (int j = 0; j < n; ++j)
        {
            scanf("%d %d", &constraints[j][0], &constraints[j][1]);
        }

        int result = countSatisfyingIntegers(n, constraints);
        printf("%d\n", result);
    }

    return 0;
}
