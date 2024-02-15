#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, k;
    cin >> a >> k;
    int b;
    int c = 5 - k;
    int count = 0;
    for (int i = 1; i <= a; i++)
    {
        cin >> b;
        if (b <= c)
        {
            count++;
        }
    }
    cout << count / 3;
}