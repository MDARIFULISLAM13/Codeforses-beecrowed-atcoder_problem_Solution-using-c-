#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b;
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &b);
        if (b % 7 == 0)
        {
            printf("%d\n", b);
        }
        else
        {
            int c = b / 10;
            int d = c * 10;

            for (int j = d; j <= d + 9; j++)
            {
                if (j % 7 == 0)
                {
                    printf("%d\n", j);
                    break;
                }
            }
        }
    }
}