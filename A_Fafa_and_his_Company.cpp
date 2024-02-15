#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a;
    cin >> a;
    int count = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}