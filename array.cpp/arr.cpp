#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int count = 0;
    int total = 0;
    for (int i = 1; i <= a; i++)
    {
        count++;
        total++;
        if (count == 3)
        {
            count = 0;
            a += 1;
        }
    }
    cout << total;
}