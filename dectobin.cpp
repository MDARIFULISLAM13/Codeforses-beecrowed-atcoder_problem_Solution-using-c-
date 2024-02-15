#include <bits/stdc++.h>
using namespace std;

int dtb(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)

        x *= 2;

    while (x > 0)
    {

        int last = n / x;

        n -= last * x;
        x /= 2;
        ans = ans * 10 + last;
    }
    return ans;
}
int main()
{
    int a;
    cin >> a;
    cout << dtb(a);
}