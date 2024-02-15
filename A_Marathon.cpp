#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        int a;
        cin >> a;
        int count = 0;
        int x;
        for (int i = 0; i < 3; i++)
        {
            cin >> x;
            if (x > a)
            {
                count++;
            }
        }
        cout << count << "\n";
    }
}