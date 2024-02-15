#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    long long int n, b, d, sum = 0, ans = 0;
    cin >> n >> b >> d;
    while (n--)
    {
        int x;
        cin >> x;
        if (x <= b)
        {

            sum += x;
        }
        if (sum > d)
        {
            sum = 0;
            ans += 1;
        }
    }
    cout << ans << endl;
}