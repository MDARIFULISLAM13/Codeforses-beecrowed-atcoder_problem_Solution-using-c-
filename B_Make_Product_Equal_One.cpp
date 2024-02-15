#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    long long int t, sum = 0, count = 0, count0 = 0, v;
    cin >> t;
    while (t--)
    {
        cin >> v;
        if (v == 0)
        {
            sum += 1;
            count0++;
        }
        else if (v > 1)
        {
            sum += (v - 1);
        }
        else if (v == -1)
        {
            count++;
        }
        else if (v < -1)
        {
            sum += abs(v) - 1;
            count++;
        }
    }
    if (count0 == 0)
    {
        if (count % 2 == 1)
        {
            sum += 2;
        }
    }
    else if (count % 2 == 1 && (count0 + count) % 2 == 1 && count0 % 2 != 0)
    {
        sum += 2;
    }

    cout << sum << "\n";
}