#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a;
        cin >> a;
        long long int total = 0;
        int c = 0;
        while (a)
        {
            if (a < 10)
            {
                total += a;
                break;
            };
            c = a / 10;
            a = a - (c * 10);
            a = a + c;
            total += (c * 10);
        }
        cout << total << endl;
    }
    return 0;
}