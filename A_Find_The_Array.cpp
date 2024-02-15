#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int total = 1, count = 1, i = 3;
        while (total < n)
        {
            total += i;
            i += 2;
            count++;
        }
        cout << count << endl;
    }
}