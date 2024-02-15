#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        for (int j = c; j >= 0; j--)
        {
            if (j % a == b)
            {
                printf("%d\n", j);
                break;
            }
        }
    }
}