#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    string d;
    d.insert(d.end(), a.begin(), a.end());
    d.erase(d.begin());
    sort(d.begin(), d.end());
    int b = d.length();
    if (b == 0)
    {
        if (a[0] > 91)
        {
            a[0] = a[0] - 32;
        }
        else
        {
            a[0] += 32;
        }
        cout << a;
    }
    else if (a[0] > 91 && d[b - 1] < 91)
    {
        a[0] = a[0] - 32;
        for (int i = 1; i <= b; i++)
        {
            if (a[i] < 91)
            {
                a[i] = a[i] + 32;
            }
        }
        cout << a;
    }
    else if (a[0] < 91 && d[b - 1] < 91)
    {
        for (int i = 0; i <= b; i++)
        {
            if (a[i] < 91)
            {
                a[i] = a[i] + 32;
            }
        }
        cout << a;
    }

    else
        cout << a;
}