#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, p = 0, x = 0, sum = 0, sum1 = 0;
        cin >> a >> b;
        string c;
        cin >> c;

        for (int i = 0; i < a; i++)
        {

            if (c[i] == 'B')
            {
                if (sum1 == 0)
                {
                    sum += 1;
                    sum1 = 1;
                    p = i;
                }
                else
                {
                    x = i - p;
                    if (x >= b)
                    {
                        sum++;
                        p = i;
                    }
                }
            }
        }
        cout << sum << "\n";
    }
}