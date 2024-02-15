
#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a;
    cin >> a;
    int b[a];
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    int c;
    cin >> c;
    sort(b, b + a);
    while (c--)
    {
        int d;
        cin >> d;
        int ans = upper_bound(b, b + a, d) - b;
        cout << ans << endl;
    }
}