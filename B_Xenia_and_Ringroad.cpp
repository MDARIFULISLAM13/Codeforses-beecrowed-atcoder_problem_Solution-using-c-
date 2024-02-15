#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    cin >> a >> b;
    long long int c[b];
    for (int i = 1; i <= b; i++)
    {
        cin >> c[i];
    }
    long long int count = 0;
    count += c[1] - 1;
    for (int i = 2; i <= b; i++)
    {
        if (c[i] < c[i - 1])
        {
            int x = a - c[i - 1];
            count += (x + c[i]);
        }
        else
        {
            count += (c[i] - c[i - 1]);
        }
    }
    cout << count << endl;
}