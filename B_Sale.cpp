#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> c(a);
    int total = 0;

    for (int i = 0; i < a; i++)
    {
        cin >> c[i];
    }
    sort(c.begin(), c.end());
    for (int i = 0; i < a; i++)
    {
        if (b == 0)
        {
            break;
        };
        if (c[i] < 0)
        {
            total += abs(c[i]);
            b--;
        }
    }
    cout << total;
}