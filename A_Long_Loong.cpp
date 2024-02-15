#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("L");
    for (int i = 1; i <= a; i++)
    {
        printf("o");
    }
    printf("ng\n");
    return 0;
}