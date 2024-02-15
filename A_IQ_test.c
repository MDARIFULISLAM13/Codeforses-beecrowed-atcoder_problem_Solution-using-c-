#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b[a];
    int c[a - 1];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        c[i] = b[i + 1] - b[i];
    }
}