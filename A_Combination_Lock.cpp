#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int a;
    cin >> a;
    string b, c;
    cin >> b >> c;
    int total = 0;
    for (int i = 0; i < a; i++)
    {
        if (c[i] > b[i])
        {
            swap(c[i], b[i]);
        }
        total += min((b[i] - c[i]), (10 - b[i] + c[i]));
    }
    cout << total;
}