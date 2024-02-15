#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a;
    cin >> n >> m;
    int maximum = INT_MIN;
    int out = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a >= maximum)
        {
            maximum = a;
            out = i;
        }
    }
    cout << out << endl;
}