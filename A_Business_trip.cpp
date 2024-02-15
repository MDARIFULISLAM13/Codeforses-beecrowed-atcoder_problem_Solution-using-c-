#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    vector<int> b(12);
    for (int i = 0; i < 12; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    int count = 0;
    for (int i = 11; i >= 0; i--)
    {
        if (a <= 0)
        {
            break;
        };
        a -= b[i];
        count++;
    }
    if (a > 0)
    {
        cout << "-1\n";
    }
    else
    {
        cout << count << endl;
    }
}