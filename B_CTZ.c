#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int i = -1;
    while (a > 0)
    {
        a /= 10;
        i++;
    }
    printf("%d", i);
}