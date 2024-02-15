#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        int b[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + 3);
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            if (a[i] != b[i])
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << "1\n";
        }
        else
        {
            cout << count << endl;
        }
    }
}