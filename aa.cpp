#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b = 0;
    cin >> a;
    for (long long int i = 1; i <= a; i++)
    {
        b += i;
    }
    cout << b;
}