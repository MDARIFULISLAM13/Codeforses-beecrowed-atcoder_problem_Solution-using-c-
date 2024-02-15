#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, a, b;
        cin >> x >> y >> a >> b;
        long long int c = max(x, y);
        long long int d = min(x, y);
        long long ans = 0;
        ans += (d * b) + ((c - d) * a);
        long long ans2 = x * a + y * a;
        cout << min(ans, ans2) << endl;
    }
}