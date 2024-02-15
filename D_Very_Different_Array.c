#include <stdio.h>

int can_send_messages(int n, int f, int a, int b, int moments[])
{
    long long charge = f;

    for (int i = 0; i < n; i++)
    {
        if (charge < a)
        {
            if (charge < b)
            {
                return 0; // Not enough charge to send the message or turn on the phone
            }
            else
            {
                charge = 0; // Turn off the phone
            }
        }
        else
        {
            charge -= a; // Send the message
        }

        if (i < n - 1)
        {
            charge += b; // Turn on the phone for the next message
        }
    }

    return 1; // Stepan can send all messages
}

int main()
{
    int t;
    scanf("%d", &t); // Number of test cases

    while (t--)
    {
        int n, f, a, b;
        scanf("%d %d %d %d", &n, &f, &a, &b); // Input for each test case

        int moments[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &moments[i]);
        }

        // Check if Stepan can send all messages and print the result
        if (can_send_messages(n, f, a, b, moments))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
