#include <iostream>
#include <cmath>
#include <climits>

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main()
{
    fastread();
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int a, b, r;
        cin >> a >> b >> r;
        long long int result = LLONG_MAX; // Correct initialization

        for (long long int x = 0; x <= r; ++x)
        {
            long long int current_result = abs((a ^ x) - (b ^ x));
            result = min(result, current_result);
        }

        cout << result << endl;
    }

    return 0;
}
