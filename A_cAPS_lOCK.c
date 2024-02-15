#include <stdio.h>
#include <string.h>
int main()
{
    char a[3000];
    scanf("%s", &a);
    int b = strlen(a);
    if (a[0] > 91)
    {
        a[0] = a[0] - 32;
        for (int i = 1; i < b; i++)
        {
            if (a[i] < 91)
            {
                a[i] = a[i] + 32;
            }
        }
    }

    printf("%s\n", a);
    return 0;
}