
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#include <bits/stdc++.h>
using namespace std;
int main()
{
    fastread();
    int a;
    cin >> a;
    while (a--)
    {
        int b;
        cin >> b;
        int c[b];
        for (int i = 0; i < b; i++)
        {
            cin >> c[i];
        }
        int count = 0;
        sort(c, c + b);
        for (int i = 0; i < b; i++)
        {
            if (c[i] != c[i + 1])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}