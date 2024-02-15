#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b[a];
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    int maa = 1;
    int maxf = 1;
    for (int i = 0; i < a; i++)
    {
        if (b[i] >= b[i - 1])
        {
            maa++;
        }
        else
        {
            maa = 1;
        }
        maxf = max(maa, maxf);
    }
    cout << maxf;
}