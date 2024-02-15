#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int count = 1;
    long long int lp = a;
    for (int i = 1; i <= 10000000; i++)
    {
        if (lp % 10 == 0 || lp % 10 == b)
        {
            break;
        }
        else
        {
            count++;
            lp += a;
        }
    }
    cout << count;
}