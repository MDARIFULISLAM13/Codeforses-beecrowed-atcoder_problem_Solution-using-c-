#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        // Find the highest power of 2 that divides n+1
        int k = 0;
        while ((n + 1) % (1 << k) == 0)
        {
            k++;
        }

        // Calculate x using the formula x = n / (2^k - 1)
        int x = n / ((1 << k) - 1);

        // Output the value of x
        cout << x << endl;
    }

    return 0;
}
