#include <stdio.h>
int main()
{
    long long int a;
    scanf("%lld", &a);
    for (int i = 1; i <= a; i++)
    {
        long long int b;
        scanf("%lld", &b);
        char c[b], d[b];
        scanf("%s%s", &c, &d);
        long long int s = 0;
        long long int ss = 0;
        for (int j = 0; j < b; j++)
        {
            if (c[j] != d[j] && c[j] == '1')
            {
                s++;
            }
        }
        for (int j = 0; j < b; j++)
        {
            if (c[j] != d[j] && d[j] == '1')
            {
                ss++;
            }
        }
        if (ss == b - 1 && s == 0 && b != 1)
        {
            ss += 1;
        }
        else if (s == b - 1 && ss == 0 && b != 1)
        {
            s += 1;
        }

        if (s > ss)
        {
            printf("%lld\n", s);
        }
        else
        {
            printf("%lld\n", ss);
        }
    }
}