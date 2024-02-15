#include <stdio.h>

char find_lexicographically_smallest_word(int n)
{
    for (int i = 1; i <= 26; i++)
    {
        for (int j = 1; j <= 26; j++)
        {
            for (int k = 1; k <= 26; k++)
            {
                if (i + j + k == n)
                {
                    char result[4];
                    result[0] = i + 'a' - 1;
                    result[1] = j + 'a' - 1;
                    result[2] = k + 'a' - 1;
                    result[3] = '\0';
                    return result;
                }
            }
        }
    }
    return ""; // Default return in case of no match (not required for this problem).
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int test_case = 0; test_case < t; test_case++)
    {
        int n;
        scanf("%d", &n);
        char result[4];
        strcpy(result, find_lexicographically_smallest_word(n));
        printf("%s\n", result);
    }

    return 0;
}
